class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int res=0;
        unordered_map<int,int>mp;
        int j=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            while(mp[nums[i]]>k){
                mp[nums[j++]]--;
            }
            res=max(res,i-j+1);
        }
        return res;
    }
};