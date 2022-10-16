//First move the cursor excluding the spaces from the end and then run the loop until the first space comes.
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        int l=0;
        while(n>=0 && s[n]==' '){
            n--;
        }
        while(n>=0 && s[n]!=' '){
            l++;
            n--;
        }    
        
    return l;
    }
};