class Solution {
public:
    int minArr(vector<int> &arr){
        int mini = arr[0];
        for(int i = 1;i < arr.size();i++){
            if(arr[i] < mini) mini = arr[i];
        }
        return mini;
    }
    int maxArr(vector<int> &arr){
        int maxi = arr[0];
        for(int i = 1;i < arr.size();i++){
            if(arr[i] > maxi) maxi = arr[i];
        }
        return maxi;
    }
    int noOfBouq(vector<int> &arr,int k,int day){
        int bouq = 0;
        int flowers = 0;
        for(int i = 0;i < arr.size();i++){
            if(arr[i] <= day){
                flowers++;
            }
            else{
                bouq += (flowers/k);
                flowers = 0;
            }
        }
        bouq += (flowers/k);
        return bouq;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < (long long)m*k) return -1;
        int low = minArr(bloomDay);
        int high = maxArr(bloomDay);
        while(low <= high){
            int mid = low + (high-low)/2;;
            if(noOfBouq(bloomDay,k,mid) >= m) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
