class Solution {
public:
    long long elementAtRandC(int R,int C){
        long long answer = 1;
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
    vector<int> getRow(int rowIndex) {
     return nth_row(rowIndex + 1);   
    }
};
