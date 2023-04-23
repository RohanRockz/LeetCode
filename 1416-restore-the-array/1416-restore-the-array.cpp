class Solution {
    vector<int> a;
    int n;
    int mod;
    
    int solve(string &s, int i, int &k)
    {
        if(i >= n)
            return 1;
        if(s[i] == '0')
            return 0;
        if(a[i] == -1)
        {
            int ways = 0;
            int curr = 0;
            
            for(int j = i; j < n; j++)
            {              
                if((long)curr * 10 + s[j] - '0' > k)
                    break;
                
                curr = curr * 10 + s[j] - '0';
                ways = (ways + solve(s, j+1, k)) % mod;
            }
            a[i] = ways;
        }
        return a[i];        
    }
    
public:
    int numberOfArrays(string s, int k) 
    {
        n = s.size();
        a = vector<int> (n, -1);
        mod = 1000000007;
        return solve(s, 0, k);
    }
};