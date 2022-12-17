//A nice implementation and a good problem to solve!!
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                res=max(res,sum);
                sum=0;
            }
            sum=sum+nums[i];
        }
        return max(res,sum);
    }
};