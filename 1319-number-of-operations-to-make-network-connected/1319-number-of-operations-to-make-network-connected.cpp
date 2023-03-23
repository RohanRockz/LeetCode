class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) 
    {
        int k = connections.size();
        if(k < n-1)
            return -1;
        
        unordered_map<int, unordered_set<int>> mp;
        
        for(auto v : connections)
            mp[v[0]].insert(v[1]), mp[v[1]].insert(v[0]);
        
        queue<int> q;
        q.push(0);
        vector<bool> visited(n, false);
        visited[0] = true;
        
        while(!q.empty())
        {
            for(int i = 0; i<q.size(); i++)
            {
                int z = q.front();
                q.pop();
                
                for(auto j : mp[z])
                {
                    if(!visited[j])
                    {
                        visited[j] = true;
                        q.push(j);
                    }
                    mp[j].erase(z);
                }
                mp.erase(z);
            }
        }
        
        int s = 0;
        for(int i= 0; i<n; i++)
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
                s++;
                
                while(!q.empty())
                {
                    for(int i = 0; i<q.size(); i++)
                    {
                        int z = q.front();
                        q.pop();
                        
                        for(auto j : mp[z])
                        {
                            if(!visited[j])
                            {
                                visited[j] = true;
                                q.push(j);
                            }
                            mp[j].erase(z);
                        }
                        mp.erase(z);
                    }
                }   
            }
        }        
        return s;
    }
};