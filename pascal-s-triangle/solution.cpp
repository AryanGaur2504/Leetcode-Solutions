class Solution {
public:
    int elementAtRandC(int R,int C){
        int answer = 1;
        int n = R - 1;
        int r = C - 1;
        int den = 1;
        while(den <= r){
            answer *= n;
            answer /= den;
            n--;
            den++;
        }
        return answer;
    }
    vector<int> nth_row(int n){
        vector<int> row;
        for(int i = 1;i <= n;i++) row.push_back(elementAtRandC(n,i));
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1;i <= numRows;i++) ans.push_back(nth_row(i));
        return ans;
    }
};
