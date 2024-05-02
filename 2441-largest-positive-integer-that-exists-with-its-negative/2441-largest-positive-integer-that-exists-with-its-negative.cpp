class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int li=0;
        int hi=size(nums)-1;
        while(li<hi){
            if(-nums[li]==nums[hi])
                return nums[hi];
            else if(-nums[li]>nums[hi])
                ++li;
            else
                --hi;
        }
        return -1;
    }
};