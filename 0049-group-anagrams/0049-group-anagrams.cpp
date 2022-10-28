class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>>a;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            a[t].push_back(s);
        }
        vector<vector<string>>ana;
        for(auto p:a){
            ana.push_back(p.second);
        }
        return ana;
    }
};