class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])<=mini){
                mini=abs(nums[i]);
                n=nums[i];
            }
        }
        return n;
    }
};