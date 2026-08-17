class Solution {
public:
    int maximum_in_arr(vector<int> &arr){
        int maxi = arr[0];
        for(int i = 1;i < arr.size();i++){
            if(arr[i] > maxi) maxi = arr[i];
        }
        return maxi;
    }
    long no_of_hours_req(vector<int> &arr,int speed){
        long hours = 0;
        for(int i = 0;i < arr.size();i++){
            hours += ceil((double)arr[i]/(double)speed);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long low = 1;
        long high = maximum_in_arr(piles);
        while(low <= high){
            long mid = (low + high)/2;
            if(no_of_hours_req(piles,mid) <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
