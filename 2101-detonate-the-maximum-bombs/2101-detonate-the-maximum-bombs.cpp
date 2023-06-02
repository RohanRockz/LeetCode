class Solution {
    int n;
    vector<vector<int>> g;
    vector<bool> visited;
    
    int dist(int &x1, int &y1, int &x2, int &y2)
    {
        return (int) ceil(sqrt((long)(x1-x2)*(x1-x2) + (long)(y1-y2)*(y1-y2)));
    }
    
    int dfs(int a)
    {
        int s = 0;
        for(auto &i : g[a])
        {
            if(!visited[i])
            {
                visited[i] = true;
                s++;
                s += dfs(i);
            }
        }
        return s;
    }
public:
    int maximumDetonation(vector<vector<int>>& bombs) 
    {
        n = bombs.size();
        g = vector<vector<int>> (n);
        
        int i;
        for(i = 0; i < n - 1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int d = dist(bombs[i][0], bombs[i][1], bombs[j][0], bombs[j][1]);
                if(d <= bombs[i][2])
                    g[i].push_back(j);
                
                if(d <= bombs[j][2])
                    g[j].push_back(i);
            }
        }
        
        int mx = INT_MIN;
        
        for(i = 0; i < n; i++)
        {
            visited = vector<bool> (n);
            visited[i] = true;
            int d = 1 + dfs(i);
            if(d > mx)
                mx = d;
        }
        
        return mx;
    }
};