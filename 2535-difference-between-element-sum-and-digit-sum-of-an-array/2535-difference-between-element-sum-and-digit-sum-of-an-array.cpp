class Solution {
public:
    int digit(int n){
        int z=n;
        int s=0;
        while(z!=0){
            int d=z%10;
            s=s+d;
            z=z/10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        for(int i=0;i<nums.size();i++){
            esum+=nums[i];
            dsum+=digit(nums[i]);
        }
        return abs(esum-dsum);
    }
};