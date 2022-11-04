//The difference keeps on adding and gets stored in the last element of t which is then returned by the function as desired.
class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i=0;i<s.size();i++){
            t[i+1]+=t[i]-s[i];
        }
        return t[t.size()-1];
    }
};