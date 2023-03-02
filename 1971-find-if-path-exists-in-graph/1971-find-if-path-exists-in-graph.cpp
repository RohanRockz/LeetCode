class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       unordered_map<int,vector<int>>mp;
        for(auto& i:edges){
            int a=i[0];
            int b=i[1];
            mp[a].push_back(b);
            mp[b].push_back(a);
        }
        vector<bool>seen(n);
        seen[source]=true;
        queue<int> Queue;
        Queue.push(source);
        while(!Queue.empty()){
            int curr=Queue.front();
            Queue.pop();
            if(curr==destination){
                return true;
            }
            for(auto& next:mp[curr]){
                if(!seen[next]){
                    seen[next]=true;
                    Queue.push(next);
                }
            }
        }
        return false;
        
    }
};