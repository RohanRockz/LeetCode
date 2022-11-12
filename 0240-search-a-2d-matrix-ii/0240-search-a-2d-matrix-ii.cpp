class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        if(r==0){
            return false;
        }
        int i=0,j=c-1;
        while(i<r&& j>=0){
            if(target==matrix[i][j]){
                return true;
            }
           else if(target<matrix[i][j]){
               j--;
           }
            else
                i++;
        }
        return false;
    }
};