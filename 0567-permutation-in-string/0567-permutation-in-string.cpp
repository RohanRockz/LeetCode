class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        if(n<m){
            return false;
        }
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(char c:s1){
            a[c-'a']++;
        }
        for(int i=0;i<m;i++){
            b[s2[i]-'a']++;
        }
        if(a==b){
            return true;
        }
        for(int i=m;i<n;i++){
            b[s2[i-m]-'a']--;
            b[s2[i]-'a']++;
            if(a==b){
                return true;
            }
        }
        return false;
    }
};