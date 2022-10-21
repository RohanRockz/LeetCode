//Using set the problem can be solved as follows:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>a;
        for(int i=0;i<nums.size();i++){
            if(a.count(nums[i])){
                return true;
            }
            a.insert(nums[i]);
        }
        return false;
    }
};