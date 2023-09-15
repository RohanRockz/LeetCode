class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1=s.size();
        int t1=t.size();
        int j=0;
       for(int i=0;i<t1 && j<s1;i++){
           if(s[j]==t[i]){
               j++;
           }
       }
        return j==s1;    
        
    }
};