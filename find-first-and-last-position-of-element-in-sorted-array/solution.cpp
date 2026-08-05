class Solution {
public:
    int first_occ(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int first = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(target > nums[mid]){
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return first;
    }
    int last_occ(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int last = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if(target > nums[mid]){
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return{first_occ(nums,target),last_occ(nums,target)};
    }
};
