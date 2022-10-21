class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            if(a[nums[i]]==0){
                a[nums[i]]=1;
            }
            else{
                a[nums[i]]++;
                if(a[nums[i]]>=2){
                    return true;
                }
            }
        }
        return false;
    }
};