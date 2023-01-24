class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       int m=mat.size();
        int n=mat[0].size();
       vector<int>temp;
        for(int r=0;r<m;r++){
            temp.clear();
            for(int j=0,i=r;j<n&&i<m;j++,i++){
                temp.push_back(mat[i][j]);
            }
            sort(temp.begin(),temp.end());
            for(int j=0,i=r;j<n&&i<m;j++,i++){
                mat[i][j]=temp[j];
            }
        }
        for(int c=0;c<n;c++){
            temp.clear();
            for(int i=0,j=c;i<m&&j<n;i++,j++){
                temp.push_back(mat[i][j]);
            }
            sort(temp.begin(),temp.end());
            for(int i=0,j=c;i<m&&j<n;i++,j++){
                mat[i][j]=temp[i];
            }
        }
        return mat;
        
    }
};