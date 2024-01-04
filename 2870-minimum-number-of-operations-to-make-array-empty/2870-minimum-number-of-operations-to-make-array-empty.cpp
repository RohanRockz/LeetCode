class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &p:nums){
            mp[p]++;
        }
        int res=0;
       for(auto &point:mp){
           int t=point.second;
           if(t==1){
               return -1;
           }
           res+=t/3;
           if(t%3){
               res+=1;
           }
       }
        return res;
    }
};