class Solution {
    vector<vector<int>> m;
    vector<bool> vis, res;
    
    bool f(int i)
    {
        if(res[i])
            return true;
        
        for(auto &j : m[i])
        {
            if(vis[j])
                return res[j] = false;
            
            vis[j] = true;
            bool z = f(j);
            if(!z)
                return res[i] = false;
            vis[j] = false;
            res[j] = true;
        }
        
        return res[i] = true;
    }
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        m = vector<vector<int>> (numCourses);
        vis = res = vector<bool> (numCourses, false);
        
        for(auto v : prerequisites)
            m[v[0]].push_back(v[1]);
        
        
        for(int i = 0; i < numCourses; i++)
        {
            if(!res[i] && m[i].size())
            {
                vis[i] = true;
                res[i] = f(i);
                if(!res[i])
                    return false;
                vis[i] = false;
            }
        }
        return true;
    }
};