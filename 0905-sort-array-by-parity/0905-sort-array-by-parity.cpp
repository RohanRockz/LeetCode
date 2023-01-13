class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int even=0;
        int odd=n-1;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                res[odd]=nums[i];
                odd--;
            }
            else{
                res[even]=nums[i];
                even++;
            }
        }
        return res;
    }
};