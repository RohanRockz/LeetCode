class Solution {
public:
    bool check(vector<vector<int>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return false;
        }
        if(grid[i][j]==1){
            return true;
        }
        grid[i][j]=1;
        bool b1=check(grid,i+1,j);
        bool b2=check(grid,i,j+1);
        bool b3=check(grid,i-1,j);
        bool b4=check(grid,i,j-1);
        return b1&&b2&&b3&&b4;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    res+=check(grid,i,j)?1:0;
                }
            }
        }
        return res;
    }
};