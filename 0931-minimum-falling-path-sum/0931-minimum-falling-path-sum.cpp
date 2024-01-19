
   class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& m) 
    {
        int n = m.size();
        
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int s = m[i-1][j];
                
                if(j - 1 >= 0)
                    s = min(s, m[i-1][j-1]);
                
                if(j + 1 < n)
                    s = min(s, m[i-1][j+1]);
                
                m[i][j] += s;
            }
        }
        
        int k = INT_MAX;
        for(int j = 0; j < n; j++)
            k = min(k, m[n-1][j]);
        
        return k;
    }
};
