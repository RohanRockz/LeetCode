class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,sub=0;
        for(auto num:nums){
            if(num==0){
                sub++;
            }
            else{
                sub=0;
            }
            ans+=sub;
        }
        return ans;
    }
};