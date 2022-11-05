class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n=s.size();
        if(n==0){
            return 0;
        }
        set<char>a;
        int mx=0;
        int i=0,j=0;
        while(i<n){
            if(a.find(s[i])==a.end()){
                a.insert(s[i]);
                mx=max(mx,(int)a.size());
                i++;
            }
            else{
                a.erase(s[j]);
                j++;
            }
        }
        return mx;
    }
};