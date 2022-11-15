//Just count the total squares and the common side between any two adjacent sqaures.
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int tot=0;
        int rep=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    tot++;
                    if(i!=0 && grid[i-1][j]==1){
                        rep++;
                    }
                    if(j!=0 && grid[i][j-1]==1){
                        rep++;
                    }
                }
            }
        }
        return 4*tot-2*rep;
    }
};