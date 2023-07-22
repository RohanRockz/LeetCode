class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        vector<pair<int,int>>di={{1, 2}, {1, -2}, {-1, 2}, {-1, -2},
                                            {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
        vector dp(k+1,vector(n,vector<double>(n,0.0)));
        dp[0][row][column]=1;
        for(int m=1;m<=k;m++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    for(auto &p:di){
                        int previ=i-p.first;
                        int prevj=j-p.second;
                        if(previ>=0 && previ<n && prevj>=0 && prevj<n){
                            dp[m][i][j]+=dp[m-1][previ][prevj]/8;
                        }
                        
                    }
                }
            }
        }
        double total=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                total+=dp[k][i][j];
            }
        }
        return total;
    }
};