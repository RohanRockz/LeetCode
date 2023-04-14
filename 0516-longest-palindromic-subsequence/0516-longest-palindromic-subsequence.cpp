class Solution {
    string a;
    int n;
    vector<vector<int>>mp;
public:
    int longestPalindromeSubseq(string s) {
        a=s;
        n=s.size();
        mp=vector<vector<int>>(n,vector<int>(n,-1));
        return palin(0,n-1);
    }
        int palin(int i,int j){
        if(i==j){
            return mp[i][j]=1;
        }
        if(i>j){
            return 0;
        }
        if(mp[i][j]!=-1){
            return mp[i][j];
        }
        if(a[i]==a[j]){
            return mp[i][j]=2+palin(i+1,j-1);
        }
            else{
                return mp[i][j]=max(palin(i,j-1),palin(i+1,j));
            }
    }
};