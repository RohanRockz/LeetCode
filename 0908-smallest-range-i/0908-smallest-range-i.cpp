class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn=nums[0];
        int mx=nums[0];
        for(int a:nums){
            mn=min(mn,a);
            mx=max(mx,a);
        }
        return max(0,mx-mn-2*k);
    }
};