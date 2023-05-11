class Solution 
{
    int m, n;
    vector<vector<int>> g;
    
    int f(vector<int>& a, vector<int>& b, int i, int j)
    {
        if(i < m && j < n)
        {
            if(g[i][j] != -1)
                return g[i][j];
            if(a[i] == b[j])
                return g[i][j] = 1 + f(a, b, i+1, j+1);
            else
                return g[i][j] = max(f(a, b, i+1, j), f(a, b, i, j+1));
        }
        else
            return 0;
    }
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) 
    {
        m = nums1.size();
        n = nums2.size();
        
        g = vector<vector<int>> (m, vector<int> (n, -1));
        
        return f(nums1, nums2, 0, 0);
    }
};