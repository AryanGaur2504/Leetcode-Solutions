class Solution {
public:
    int maxArr(vector<int> &arr){
        int maxi = arr[0];
        for(int i = 1;i < arr.size();i++){
            if(maxi < arr[i]) maxi = arr[i];
        }
        return maxi;
    }
    int sum(vector<int> &arr,int divisor){
        int sum = 0;
        for(int i = 0;i < arr.size();i++){
            sum += ceil((double)arr[i]/(double)divisor);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maxArr(nums);
        while(low <= high){
            int mid = low + (high - low)/2;
            if(sum(nums,mid) <= threshold) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
