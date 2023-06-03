class Solution {
public:
    int maxi=INT_MIN;
    void dfs(vector<int>aL[],vector<int>&informTime,int curr,int time){
        maxi=max(maxi,time);
        for(int a:aL[curr]){
            dfs(aL,informTime,a,time+informTime[curr]);
        }
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> aL[n];
        for(int i=0;i<n;i++){
            if(manager[i]!=-1){
                aL[manager[i]].push_back(i);
            }
        }
        dfs(aL,informTime,headID,0);
        return maxi;
    }
};