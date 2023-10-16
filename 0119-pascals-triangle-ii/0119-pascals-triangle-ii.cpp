class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> a(rowIndex+1);
        
        for(int i=0; i<rowIndex+1; i++)
        {
            a[i].resize(i+1);
            a[i][0] = a[i][i] = 1;
            for(int j=1; j<i; j++)
                a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
        return a[rowIndex];
    }
};