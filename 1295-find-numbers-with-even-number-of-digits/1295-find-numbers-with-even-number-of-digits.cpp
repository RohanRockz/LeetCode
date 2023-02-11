class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int n=nums.size();
        int c=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]>9 && nums[i]<100) ||(nums[i]>999 && nums[i]<10000) ||(nums[i]==100000)){
                c++;
            }
        }
        return c;
    }
};