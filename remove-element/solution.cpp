class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int i;
     //Finding First Occ Of Val
     for(int k = 0;k < nums.size();k++){
        if(nums[k] == val){
            i = k;
            break;
        }
     }   
     int j = i+1;
     while(j < nums.size()){
            if(nums[j] != val){
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
        return i;
    }
};
