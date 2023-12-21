class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int>stack;
        for(int i=0;i<nums.size();i++){
        while(!stack.empty()&& stack.back()>nums[i] && stack.size()-1+nums.size()-i>=k){
            stack.pop_back();
        }
            if(stack.size()<k){
                stack.push_back(nums[i]);
            }
        
        }
        return stack;
    }
};