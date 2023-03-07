class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res=words.size();
        bool alpha[26]={};
        for(int i=0;i<allowed.size();i++){
            alpha[allowed[i]-'a']=true;
        }
        for(string word:words){
            for(char c:word){
                if(!alpha[c-'a']){
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};