class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        vector<int> result(nums.size());
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int left = 0;
        int right = 0;
        for(int i = 2;i < nums.size();i++){
            if(arr1.back() > arr2.back()){
                arr1.push_back(nums[i]);
                left++;
            }
            else{
                arr2.push_back(nums[i]);
                right++;
            }
        } 
        for(int i = 0;i <= left;i++){
            result[i] = arr1[i];
        }
        for(int i = left + 1;i <= (left + right + 1);i++){
            result[i] = arr2[i - (left + 1)];
        }
        return result;
    }
};
