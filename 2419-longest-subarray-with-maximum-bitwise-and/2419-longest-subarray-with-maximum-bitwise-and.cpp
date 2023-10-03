class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int count=1;
        int res=1;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==maxi && nums[i]==nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            res=max(res,count);
        }
        return res;
    }
};