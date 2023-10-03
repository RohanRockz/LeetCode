class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
       unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            c+=mp[nums[i]]++;
        }
        return c;
    }
};