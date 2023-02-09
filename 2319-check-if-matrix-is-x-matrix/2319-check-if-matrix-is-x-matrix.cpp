class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                 if((i==j)||((i+j)==(r-1))){
                     if(grid[i][j]==0){
                         return false;
                     }
                 }
                else
                    if(grid[i][j]!=0){
                        return false;
                    }
                }
            }
        return true;
    }
};