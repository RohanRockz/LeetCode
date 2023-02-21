class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto c:mp){
            if(c.second==1){
                return c.first;
            }
        }
        return -1;
    }
};