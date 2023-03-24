class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<bool>visit(n,false);
        vector<vector<int>>adj(n),back(n);
        queue<int>q;
        q.push(0);
        int res=0;
        for(auto c:connections){
            adj[c[0]].push_back(c[1]);
            back[c[1]].push_back(c[0]);
        }
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            visit[curr]=true;
            for(auto a:adj[curr]){
                if(!visit[a]){
                    res++;
                    q.push(a);
                }
            }
            for(auto b:back[curr]){
                if(!visit[b]){
                    q.push(b);
                }
            }
        }
        return res;
    }
};