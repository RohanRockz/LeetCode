class Solution 
{
    unordered_map<string, unordered_map<string, double>> m;
    unordered_set<string> path;
    double dfs(string a, string &b)
    {
        if(m.find(a) != m.end())
        {
            if(m[a].find(b) != m[a].end())
                return m[a][b];
            else
            {
                for(auto &i : m[a])
                {
                    cout<<i.first<<endl;
                    
                    if(path.find(i.first) == path.end() && i.second >= 0)
                    {
                        path.insert(i.first);                        
                        double k = i.second * dfs(i.first, b);
                        path.erase(i.first);
                        cout<<"-> "<<k<<endl;
                        if(k > 0)
                            return k;
                    }
                }
            }
        }
        return -1.0;
    }
    
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) 
    {
        for(int i = 0; i < equations.size(); i++)
        {
            m[equations[i][0]][equations[i][1]] = values[i];
            m[equations[i][1]][equations[i][0]] = 1.0 / values[i];
        }
        
        vector<double> res;
        
        for(auto &q : queries)
        {
            if(m.find(q[0]) == m.end() || m.find(q[1]) == m.end())
                res.push_back(-1.0);
            else
            {
                cout<<endl<<q[0]<<" "<<q[1]<<endl;
                m[q[0]][q[1]] = dfs(q[0], q[1]);
                m[q[1]][q[0]] = 1.0 / m[q[0]][q[1]];
                res.push_back(m[q[0]][q[1]]);
            }
        }
        
        return res;
    }
};