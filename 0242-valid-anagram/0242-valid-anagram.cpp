class Solution {
public:
    const int CHAR=256;
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int count[256]={0};
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0;i<CHAR;i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};