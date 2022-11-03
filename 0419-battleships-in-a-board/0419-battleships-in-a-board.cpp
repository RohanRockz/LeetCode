class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
       if((board.empty())||(board[0].empty())){
           return 0;
       } 
        int r=board.size();
        int c=board[0].size();
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='X'&&(i==0||(board[i-1][j]!='X'))&&(j==0 ||(board[i][j-1]!='X'))){
                    count+=1;
                }
            }
        }
        return count;
    }
};