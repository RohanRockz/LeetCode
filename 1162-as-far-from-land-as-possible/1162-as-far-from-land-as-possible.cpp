class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int res=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1)
                    continue;
                grid[i][j]=201;
                if(i>0)
                    grid[i][j]=min(grid[i][j],grid[i-1][j]+1);
                if(j>0)
                    grid[i][j]=min(grid[i][j],grid[i][j-1]+1);
            }
        }
            for(int i=r-1;i>-1;i--){
                for(int j=c-1;j>-1;j--){
                    if(grid[i][j]==1)
                        continue;
                    if(i<r-1)
                        grid[i][j]=min(grid[i][j],grid[i+1][j]+1);
                    if(j<c-1)
                        grid[i][j]=min(grid[i][j],grid[i][j+1]+1);
                    res=max(res,grid[i][j]);
                }
            }
        return res==201?-1:res-1;
    }
};