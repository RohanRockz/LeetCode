class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int k=0;
       for(int j=0;j<nums.size();j++){
           if(nums[k]!=nums[j]){
               k++;
           }
           nums[k]=nums[j];
       }
        return k+1;
    }
};