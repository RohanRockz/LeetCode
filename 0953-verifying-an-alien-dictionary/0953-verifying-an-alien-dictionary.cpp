class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int a[26];
        for(int i=0;i<26;i++){
            a[order[i]-'a']=i;
        }
        for(string &w:words){
            for(char &c:w){
                c=a[c-'a'];
            }
        }
        return is_sorted(words.begin(),words.end());
    }
};