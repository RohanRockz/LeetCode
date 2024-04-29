class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
         int res=0;
        for(int i=0;i<nums.size();i++){
            sum=sum^nums[i];
        }
        k=k^sum;
        return __builtin_popcount(k);
    }
};