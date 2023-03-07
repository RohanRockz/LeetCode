class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count=0;
        vector<set<char>>v;
        for(int i=0;i<words.size();i++){
            set<char>st(words[i].begin(),words[i].end());
            v.push_back(st);
        }
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(v[i]==v[j]){
                    count++;
                }
            }
        }
        return count;
    }
};