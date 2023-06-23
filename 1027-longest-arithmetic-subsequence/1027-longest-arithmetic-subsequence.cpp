class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) 
    {
        int dp[1001][1001] = {0};
        int n = nums.size();
        if(n <= 2)
            return n;
        int m = 2;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int d = nums[j] - nums[i] + 500;
                dp[j][d] = (dp[i][d]) ? dp[i][d] + 1 : 2;
                m = max(m, dp[j][d]);
            }
        }
        return m;
    }
};