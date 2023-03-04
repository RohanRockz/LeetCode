class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>res(n,n);
        int pos=-n;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                pos=i;
            }
            res[i]=abs(i-pos);
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                pos=i;
            }
            res[i]=min(res[i],abs(pos-i));
        }
        return res;
    }
};