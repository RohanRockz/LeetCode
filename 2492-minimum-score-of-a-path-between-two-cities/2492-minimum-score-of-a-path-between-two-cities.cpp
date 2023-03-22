class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int,unordered_map<int,int>>graph;
        for(auto& road:roads){
            int u=road[0];
            int v=road[1];
            int w=road[2];
            graph[u][v]=graph[v][u]=w;
            
        }
        int res=INT_MAX;
        unordered_set<int>visit;
        queue<int>q;
        q.push(1);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto& [adj,score]:graph[node]){
                if(!visit.count(adj)){
                    q.push(adj);
                    visit.insert(adj);
                }
                res=min(res,score);
            }
        }
        return res;
    }
};