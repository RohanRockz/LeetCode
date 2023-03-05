class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        queue<int>q;
        vector<bool>visited(n,false);
        q.push(0);
        int steps=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                int curr=q.front();
                q.pop();
                if(curr==n-1){
                    return steps;
                }
                if(curr+1<n && !visited[curr+1]){
                    visited[curr+1]=true;
                    q.push(curr+1);
                }
                if(curr-1>=0 && !visited[curr-1]){
                    visited[curr-1]=true;
                    q.push(curr-1);
                }
                for(int i:mp[arr[curr]]){
                    if(!visited[i]){
                        visited[i]=true;
                        q.push(i);
                    }
                }
                mp[arr[curr]].clear();
            }
            steps++;
        }
        return -1;
    }
};