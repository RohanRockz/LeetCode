class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int p=0,left=0;
        for(auto &i:mp){
            p+=i.second/2;
            left+=i.second%2;
        }
        return {p,left};
    }
};