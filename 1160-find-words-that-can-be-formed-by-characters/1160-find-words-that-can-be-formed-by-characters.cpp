class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>count;
        for(char c:chars){
            count[c]++;
        }
        int res=0;
        for(string word:words){
            unordered_map<char,int>wordCount;
            for(char c:word){
                wordCount[c]++;
            }
            bool flag=true;
            for(auto& [c,freq]:wordCount){
                if(count[c]<freq){
                    flag=false;
                    break;
                }
            }
            if(flag){
                res+=word.size();
            }
        }
        return res;
    }
};