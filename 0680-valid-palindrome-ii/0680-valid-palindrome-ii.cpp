//learnt the iterative way of solving the code.Recursive code takes the same space but its complex.
class Solution {
public:
    bool validPalindrome(string s) {
        for(int i=0,j=s.size()-1;i<j;i++,j--){
            if(s[i]!=s[j]){
                return check(s,i+1,j)||check(s,i,j-1);//to check if i is removed or if j is removed then the string is palindrome or not.if it is then its true else not.
            }
        }
        return true;
    }
    bool check(string s,int l,int r){
        for(int i=l,j=r;i<j;i++,j--){
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }
};