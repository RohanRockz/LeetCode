class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) 
    {
        vector<bool> a(n);
        vector<int> b;
        
        for(auto &i : edges)
            a[i[1]] = true;
        
        for(int i = 0; i < n; i++)
        {
            if(!a[i])
                b.push_back(i);
        }
        
        return b;
    }
};