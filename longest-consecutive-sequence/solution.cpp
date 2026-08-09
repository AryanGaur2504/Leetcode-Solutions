class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
       unordered_set<int> st(nums.begin(),nums.end());
       int count = 1;
       int longest = 1;
       for(auto x : st){
        if(st.find(x - 1) == st.end()){
            while(st.find(x+1) != st.end()){
                x++;
                count++;
            }
        }
        longest = max(longest,count);
        count = 1;
       }
       return longest;
    }
};
