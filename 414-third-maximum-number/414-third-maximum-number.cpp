class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
        int count=1;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=prev){
                count++;
                prev=nums[i];
            }
            if(count==3){
                return nums[i];
            }
        }
        return nums[0];
        
    }
};