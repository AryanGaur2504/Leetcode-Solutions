class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int size = intervals.size();
        for(int i = 0;i < size;i++){
            if(!ans.empty() && intervals[i][0] <= ans.back()[1]){
                ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            }
            else{
                ans.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return ans;
    }
};
