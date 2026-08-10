class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mini = INT_MAX;
        while(low <= high){
            int mid = (low + high)/2;
            mini = min(mini,nums[mid]);
            if(nums[low] <= nums[high]){
                mini = min(mini,nums[low]);
                return mini;
            }
            //Left Half Sorted
            if(nums[low] <= nums[mid]){
                mini = min(mini,nums[low]);
                low = mid + 1;
            }
            //Right Half Sorted
            else {
                high = mid - 1;
            }
        }
        return mini;
    }
};
