class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> res(n, vector<int> (n));
        
        int k = n * n;
        int z = 0, y = 1;
        
        while(y <= k)
        {
            int i, j;
            i = j = z;
            
            while(j < n - z)
            {
                res[i][j] = y++;
                j++;
            }
            if(y > k) break;
            j--;
            i++;
            
            while(i < n - z)
            {
                res[i][j] = y++;
                i++;
            }
            if(y > k) break;
            i--;
            j--;
            
            while(j >= z)
            {
                res[i][j] = y++;
                j--;
            }
            if(y > k) break;
            j++;
            i--;
            
            while(i > z)
            {
                res[i][j] = y++;
                i--;
            }
            if(y > k) break;
            z++;
            
        }
        return res;
    }
};