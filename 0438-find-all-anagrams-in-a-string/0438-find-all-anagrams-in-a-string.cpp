class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        int i;
        if(n<m){
            return {};
        }
        vector<int>a(26,0);
        vector<int>b(26,0);
        vector<int>res;
        for(char c:p){
            a[c-'a']++;
        }
        for( i=0;i<m;i++){
            b[s[i]-'a']++;
        }
        if(a==b){
            res.push_back(0);
        }
        for(int i=m;i<n;i++){
            b[s[i-m]-'a']--;
            b[s[i]-'a']++;
            if(a==b){
                res.push_back(i-m+1);
            }
        }
        return res;
    }
};