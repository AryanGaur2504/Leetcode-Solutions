class Solution {
public:
    bool search_element(vector<int> &nums,int target){
        for(int i = 0;i < nums.size();i++) if(nums[i] == target) return true;
        return false;
    }
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        bool seq = true;
        for(int i = 1;i < nums.size();i++){
            if(nums[i] == nums[i - 1] + 1){
                sum += nums[i];
            }
            else seq = false;
            if(!seq) break;
        }
        while(search_element(nums,sum++)){}
        return sum - 1;
    }
};
