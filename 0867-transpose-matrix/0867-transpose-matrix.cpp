class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>a(n,vector<int>(m,0));//initialize all the elements to zero so that null pointer error is avoided.
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[j][i]=matrix[i][j];
            }
        }
        return a;
    }
};