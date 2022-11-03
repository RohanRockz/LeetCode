//four variables four ways of traversing the matrix.
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int l=0,r=n-1,b=m-1,t=0;
        int way=1;
        vector<int>res;
        while(l<=r && t<=b){
            if(way==1){
                for(int i=l;i<=r;i++){
                    res.push_back(matrix[t][i]);
                }
                way=2;
                t++;
            }
            else if(way==2){
                for(int i=t;i<=b;i++){
                    res.push_back(matrix[i][r]);
                }
                way=3;
                r--;
            }
            else if(way==3){
                for(int i=r;i>=l;i--){
                    res.push_back(matrix[b][i]);
                }
                way=4;
                b--;
            }
            else if(way==4){
                for(int i=b;i>=t;i--){
                    res.push_back(matrix[i][l]);
                }
                way=1;
                l++;
}
            }
        return res;
        }
    
};