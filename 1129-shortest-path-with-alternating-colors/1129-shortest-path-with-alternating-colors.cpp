class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
      vector<vector<pair<int,int>>> g(n);
        for(auto e: redEdges)
            g[e[0]].emplace_back(e[1],0); 
        for(auto e: blueEdges)
            g[e[0]].emplace_back(e[1],1); 
        vector<int> d(n,-1); 
        
        queue<vector<int>> q;
        q.emplace(vector<int>{0,0,-1});
        
        while(!q.empty()) {
            auto front = q.front();
            q.pop();
            d[front[0]] = d[front[0]] != -1 ? d[front[0]] : front[1];
            
            for(auto &adj : g[front[0]]) {
                if(front[2] != adj.second && adj.first!= -1) {
                    q.emplace(vector<int>{adj.first, front[1] + 1, adj.second});
                    adj.first = -1;
                }
            }
        }
        return d;
    }
};