class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        unordered_set<int>s;
        for(auto n:arr){
            ++freq[n];
        }
        for(auto &p:freq){
            s.insert(p.second);
        }
        return freq.size()==s.size();
    }
};