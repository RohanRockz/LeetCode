class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxf=0;
        int i=0;
        unordered_map<int,int>mp;
        for(int j=0;j<n;j++){
            maxf=max(maxf,++mp[nums[j]]);
            while(j-i+1-maxf>k){
                --mp[nums[i++]];
            }
        }
        return maxf;
        
    }
};