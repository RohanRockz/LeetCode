class Solution {    
public:
    int longestSubsequence(vector<int>& arr, int difference) 
    {
        unordered_map<int, int> dp;
        int maxi = 1;
        
        for(auto &i : arr)
            maxi = max(maxi, dp[i + difference] = 1 + dp[i]);
            
        return maxi;
    }
};