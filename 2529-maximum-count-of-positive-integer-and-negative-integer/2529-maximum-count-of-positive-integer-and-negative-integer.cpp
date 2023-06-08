class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int z=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0 && nums[i]!=0){
                c++;
            }
            if(nums[i]==0){
                z++;
            }
        }
        return max(c,n-c-z);
    }
};