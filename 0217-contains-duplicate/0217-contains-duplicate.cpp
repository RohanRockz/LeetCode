//Using set the problem can be solved as follows:
class Solution {
public:
   bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        
        for (int num : nums) {
            if (a.find(num) != a.end()) {
                return true;
            }
            
            a.insert(num);
        }
        
        return false;
    }
};