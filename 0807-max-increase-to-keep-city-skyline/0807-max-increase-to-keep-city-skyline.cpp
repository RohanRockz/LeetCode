class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int res=0;
        vector<int>rows(n),cols(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                rows[i]=max(rows[i],grid[i][j]);
                cols[j]=max(cols[j],grid[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                res+=min(rows[i],cols[j])-grid[i][j];
            }
        }
        return res;
    }
};