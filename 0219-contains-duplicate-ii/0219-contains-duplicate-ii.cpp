class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            if(a.find(nums[i])!=a.end() && abs(a[nums[i]]-i)<=k){
                return true;
            }
            a[nums[i]]=i;
        }
        return false;
    }
};