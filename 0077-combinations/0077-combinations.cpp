class Solution {
    vector<vector<int>> ans;
    
    void f(vector<int> &a, int i, int &n, int & k)
    {
        int z = a.size();
        if(z == k)
            ans.push_back(a);
        else
        {
            if(k - z > n - i)
                return;
            
            for(int j = i + 1; j <= n; j++)
            {
                a.push_back(j);
                f(a, j, n, k);
                a.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<int> a;
        for(int i = 1; i <= n - k + 1; i++)
        {
            a.push_back(i);
            f(a, i, n, k);
            a.pop_back();
        }
        return ans;
    }
};