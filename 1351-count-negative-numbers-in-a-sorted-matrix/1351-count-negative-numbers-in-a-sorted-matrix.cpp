class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int m=grid.size();
       int n=grid[0].size();
        int i=m-1;
        int j=0;
        int cnt=0;
        while(i>=0 && i<m && j>=0 &&j<n){
            if(grid[i][j]<0){
                cnt=cnt+(n-j);
                i=i-1;
            }
            else{
                j=j+1;
            }
        }
        return cnt;
    }
};