class Solution {
    vector<long long> dp;
    int n;
    long long f(vector<vector<int>> &a, int i)
    {
        if(i >= n)
            return 0;
        else if(dp[i] != -1)
            return dp[i];
        else
            return dp[i] = max(f(a, i+1), a[i][0] + f(a, i + a[i][1] + 1));
    }
public:
    long long mostPoints(vector<vector<int>>& questions) 
    {
        n = questions.size();
        dp = vector<long long> (n, -1);
        return f(questions, 0);
    }
};