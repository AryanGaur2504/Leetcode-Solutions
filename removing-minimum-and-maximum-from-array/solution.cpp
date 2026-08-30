class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
      int n = nums.size();
      if(n == 0 || n == 1) return n;
      int left = 0;
      int right = n - 1;
      int mini = 0;
      int maxi = 0;
      while(left < n && right >= 0){
        if(nums[mini] > nums[left]){
            mini = left;
        }
        if(nums[maxi] < nums[right]){
            maxi = right;
        }
        left++;
        right--;
      }  
        int mn = min(mini, maxi);
        int mx = max(mini, maxi);

        int fromLeft = mx + 1;
        int fromRight = n - mn;
        int fromBothSides = (mn + 1) + (n - mx);

        return min({fromLeft, fromRight, fromBothSides});
    }
};
