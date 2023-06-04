class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
       vector<bool> rowflag(n,1),colflag(n,1);
        long long ans=0,colrem=n,rowrem=n;
        for(int i=queries.size()-1;i>=0;i--){
            if(queries[i][0]==0 && rowflag[queries[i][1]]){
                ans+=colrem*queries[i][2];
                rowflag[queries[i][1]]=0;
                rowrem--;
            }
            if(queries[i][0]==1 && colflag[queries[i][1]]){
                ans+=rowrem*queries[i][2];
                colflag[queries[i][1]]=0;
                colrem--;
            }
        }
        return ans;
    }
};