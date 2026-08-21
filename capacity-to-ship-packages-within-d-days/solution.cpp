class Solution {
public:
    int maxArr(vector<int> &arr){
        int maxi = arr[0];
        for(int i = 1;i < arr.size();i++){
            if(arr[i] > maxi) maxi = arr[i];
        }
        return maxi;
    }
    int summationArr(vector<int> &arr){
        int sum = arr[0];
        for(int i = 1;i < arr.size();i++){
            sum += arr[i];
        }
        return sum;
    }
    int noOfDays(vector<int> &arr,int cap){
        int days = 1;
        int curr_cap = 0;
        for(int i = 0;i < arr.size();i++){
            if(arr[i] + curr_cap <= cap){
                curr_cap += arr[i];
            }
            else{
                days++;
                curr_cap = arr[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = maxArr(weights);
        int high = summationArr(weights);
        while(low <= high){
            int mid = (low + high)/2;
            if(noOfDays(weights,mid) <= days) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
