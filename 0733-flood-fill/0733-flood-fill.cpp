class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&res,vector<vector<int>>&image,int newColor,
            int delRow[],int delCol[],int iniColor){
        res[row][col]=newColor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=row+delRow[i];
            int ncol=col+delCol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && res[nrow][ncol]!=newColor){
                dfs(nrow,ncol,res,image,newColor,delRow,delCol,iniColor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int iniColor=image[sr][sc];
        vector<vector<int>>res=image;
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        dfs(sr,sc,res,image,newColor,delRow,delCol,iniColor);
        return res;
    }
};