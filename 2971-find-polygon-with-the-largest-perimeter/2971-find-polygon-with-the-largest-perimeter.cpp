class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long prevsum=0;
        long long res=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<prevsum){
                res=nums[i]+prevsum;
            }
            prevsum+=nums[i];
        }
        return res;
    }
};