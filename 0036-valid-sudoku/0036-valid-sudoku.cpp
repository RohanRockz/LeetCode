class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>>r(9),c(9),grid(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                int n=board[i][j]-'0';
                if(r[i].count(n)||c[j].count(n)||grid[(i/3)*3+j/3].count(n)){
                    return false;
                }
                r[i].insert(n);
                c[j].insert(n);
                grid[(i/3)*3+j/3].insert(n);
            }
        }
        return true;
    }
};