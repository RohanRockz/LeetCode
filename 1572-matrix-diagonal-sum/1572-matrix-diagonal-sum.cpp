class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int s=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if((i==j)||(i+j==r-1)){
                    s+=mat[i][j];
                }
            }
        }
        return s;
    }
};