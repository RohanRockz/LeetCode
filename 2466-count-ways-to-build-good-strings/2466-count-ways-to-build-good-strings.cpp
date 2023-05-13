class Solution {
    int l, h, z, o, mod;
    vector<int> dp;
    
    int f(int i)
    {
        if(i > h)
            return 0;
        else if(dp[i] != -1)
            return dp[i];
        else if(i < l)
            return dp[i] = (f(i + z) % mod + f(i + o) % mod) % mod;
        else if(i >= l && i <= h)
            return dp[i] = (1 + f(i + z) % mod + f(i + o) % mod) % mod;
        return 0;
    }
    
public:
    int countGoodStrings(int low, int high, int zero, int one) 
    {
        l = low, h = high, z = zero, o = one, mod = 1e9 + 7;
        
        dp = vector<int> (high + 1, -1);
        
        return f(0);
    }
};