class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        int c=0;
        for(int i=0,j=0;j<pairs.size();j++){
            if(j==0 || pairs[i][1]<pairs[j][0]){
                c++;
                i=j;
            }
        }
        return c;
    }
private:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
};