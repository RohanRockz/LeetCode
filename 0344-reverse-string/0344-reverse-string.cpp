class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        for(int i=0,j=n;i<=n/2;i++,j--){
            char t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
    
    
    }
};