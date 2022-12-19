class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
         sort(nums.begin(),nums.end());
        int mn=nums[0];
        int mx=nums[n-1];
        return gcd(mn,mx);
    }        
               
};