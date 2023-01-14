class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        int odd=1;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                res[even]=nums[i];
                even=even+2;
            }
            else{
                res[odd]=nums[i];
                odd=odd+2;
            }
        }
        return res;
    }
};