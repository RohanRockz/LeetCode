class Solution {
    vector<bool> a;
    vector<bool> vis;
    void f(vector<vector<int>>& g, int i)
    {
        if(g[i].size() == 0)
            a[i] = true;
        else
        {
            for(auto &j : g[i])
            {
                if(!vis[j])
                {
                    vis[j] = true;
                    f(g, j);
                }
                if(!a[j])
                {
                    a[i] = false;
                    return;
                }
            }
            a[i] = true;
        }
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
    {
        int n = graph.size();
        a = vector<bool>(n, false);
        vis = vector<bool>(n, false);
        
        for(int i = 0; i < n; i++)
        {
            if(!vis[i])
            {
                vis[i] = true;
                f(graph, i);
            }
        }
        
        vector<int> res;
        
        for(int i = 0; i < n; i++)
        {
            if(a[i])
                res.push_back(i);
        }
        
        return res;
    }
};