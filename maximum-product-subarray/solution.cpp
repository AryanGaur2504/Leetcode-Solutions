class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pre_mul = 1;
        int suff_mul = 1;
        int maxi = INT_MIN;
        for(int i = 0;i < n;i++){
            if(pre_mul == 0) pre_mul = 1;
            if(suff_mul == 0) suff_mul = 1;
            pre_mul *= nums[i];
            suff_mul *= nums[n - i -1];
            maxi = max(maxi,max(pre_mul,suff_mul));
        }
        return maxi;
    }
};
