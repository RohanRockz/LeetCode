class Solution {
public:
    int res=-1;
    void dfs(int node,vector<int>& edges,unordered_map<int,int>& dist,vector<bool>& visit){
        visit[node]=true;
        int neighbour=edges[node];
        if(neighbour!=-1 && !visit[neighbour]){
            dist[neighbour]=dist[node]+1;
            dfs(neighbour,edges,dist,visit);
        }
        else if(neighbour!=-1 && dist.count(neighbour)){
            res=max(res,dist[node]-dist[neighbour]+1);
        }
    }
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<bool>visit(n);
        for(int i=0;i<n;i++){
            if(!visit[i]){
                unordered_map<int,int>dist;
                dist[i]=1;
                dfs(i,edges,dist,visit);
            }
        }
        return res;
    }
};