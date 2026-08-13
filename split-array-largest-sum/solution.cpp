class Solution {
public:
int maximum_arr(vector<int> &arr){
    int maxi = arr[0];
    for(int i = 1;i < arr.size();i++) maxi= max(maxi,arr[i]);
    return maxi;
}
int summation_arr(vector<int> &arr){
    int sum = 0;
    for(int i = 0;i < arr.size();i++) sum += arr[i];
    return sum;
}
int ArrReq(vector<int> arr,int maxi){
    int num = 1;
    int curr_sum = arr[0];
    for(int i = 1;i < arr.size();i++){
        if(arr[i] + curr_sum <= maxi) curr_sum += arr[i];
        else{
            num++;
            curr_sum = arr[i];
        }
    }
    return num;
}
    int splitArray(vector<int>& nums, int k) {
        int low = maximum_arr(nums);
        int high = summation_arr(nums);
        while(low <= high){
            int mid = (low + high)/2;
            if(ArrReq(nums,mid) <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
