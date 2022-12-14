class Solution {
public:
    int rob(vector<int>& nums) {
        int odd=0;
        int even=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even=max(even+nums[i],odd);
            }
            else{
                odd=max(odd+nums[i],even);
            }
        }
        return max(even,odd);
    }
};