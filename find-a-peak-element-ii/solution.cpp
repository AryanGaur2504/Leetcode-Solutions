class Solution {
public:
    int maximum(vector<vector<int>>& mat,int mid){
        int maxi = 0;
        for(int i = 0;i < mat.size();i++) if(mat[i][mid] > mat[maxi][mid]) maxi = i;
        return maxi;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int high = mat[0].size() - 1;
        while(low <= high){
            int mid = (low + high)/2;
            int row = maximum(mat,mid);
            int maximum = mat[row][mid];
            int left = (mid >= 1) ? mat[row][mid - 1] : -1;
            int right = (mid < mat[0].size()-1) ? mat[row][mid + 1] : -1;
            if(mat[row][mid] > left && mat[row][mid] > right) return {row,mid};
            if(mat[row][mid] < left) high = mid - 1;
            else low = mid + 1;
        }
        return {-1,-1};
    }
};
