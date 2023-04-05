//The minimum value is found by average of the array upto that point and maximizing it.
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long int sum=0;
         long long int res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            res=max((sum+i)/(i+1),res);
        }
        return res;
    }
};