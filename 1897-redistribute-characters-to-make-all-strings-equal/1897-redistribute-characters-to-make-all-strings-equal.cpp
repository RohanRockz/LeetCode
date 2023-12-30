class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>count;
        for(string word:words){
            for(char c:word){
                count[c]++;
            }
        }
        int n=words.size();
        for(auto& [key,value]:count){
            if(value%n !=0){
                return false;
            }
        }
        return true;
    }
};