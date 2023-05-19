class Solution 
{
    vector<int> m;
    bool dfs(int i, int ch, vector<vector<int>> &g)
    {
        for(auto &j : g[i])
        {
            if(m[j] && m[j] != ch)
                return false;
            else if(!m[j])
            {
                m[j] = ch;
                bool k = dfs(j, ch * -1, g);
                if(!k)
                    return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n = graph.size();
        if(!n)
            return true;
        
        m = vector<int> (n, 0);
        int i = 0;
        
        while(i < n)
        {
            if(graph[i].size() && !m[i])
            {
                bool k = dfs(i, 1, graph);
                if(!k)
                    return k;
            }
            i++;
        }
        return true;
    }
};