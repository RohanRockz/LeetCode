class Solution {
    unordered_map<char, vector<string>> mp;
    unordered_map<string, int> dp;
    
    bool match(string a, string b)
    {
        for(int i = 0; i < b.size(); i++)
        {
            if(a[i] != b[i])
                return false;
        }
        return true;
    }
    
    int f(string s)
    {
        if(s.size() == 0)
            return dp[s] = 0;
        
        if(dp.find(s) != dp.end())
            return dp[s];
        
        int n = INT_MAX;
        int a = s.size();
        
        for(int i = 0; i < mp[s[0]].size(); i++)
        {
            int b = mp[s[0]][i].size();
            
            if(a < b)
                continue;
            
            if(match(s, mp[s[0]][i]))
                n = min(n, f(s.substr(b)));
        }
        
        return dp[s] = min(n, 1 + f(s.substr(1)));
    }
public:
    int minExtraChar(string s, vector<string>& dictionary) 
    {
        for(auto &c : dictionary)
            mp[c[0]].push_back(c);
        
        return f(s);
    }
};