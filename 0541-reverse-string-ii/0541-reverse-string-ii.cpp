class Solution {
public:
    string reverseStr(string s, int k) {
        for(int l=0;l<s.size();l=l+2*k){
            for(int i=l,j=min(i+k-1,(int)s.size()-1);i<j;i++,j--){
                swap(s[i],s[j]);
            }
        }
        return s;
    }
};