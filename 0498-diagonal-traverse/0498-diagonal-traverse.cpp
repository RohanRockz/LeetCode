class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>result;
        if(mat.empty()){
            return {};
        }
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<=m+n-2;i++){
            for(int j=0;j<=i;j++){
                int r=j;
                int c=i-j;
                if(i%2==0){
                    swap(r,c);
                }
                if((r>=m)||(c>=n)){
                    continue;
                }
                result.push_back(mat[r][c]);
            }
        }
        return result;
    }
};