class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long res=0;
        unordered_map<int,int>mp;
        for(int i=0,j=0;j<nums.size();j++){
            k-=mp[nums[j]]++;
            while(k<=0){
                k+=--mp[nums[i++]];
            }
            res+=i;
        }
        return res;
    }
};