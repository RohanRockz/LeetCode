class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = 367;
        vector <bool> map(n , false);
        vector <int> dp(n , 0);
        for(auto x: days)
            map[x] = true;
        for(int i = n - 1; i >= 0; i--){
            dp[i] = dp[min(n - 1, i + 1)];
            if(map[i]){ 
                dp[i] = min({
                    costs[0] + dp[min(n - 1, i + 1)],
                    costs[1] + dp[min(n - 1, i + 7)],
                    costs[2] + dp[min(n - 1, i + 30)]
                });
            }
        }
        return dp[0];
    }
};