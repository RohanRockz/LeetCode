class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i:nums){
             res[i]++;
            if(res[i]>nums.size()/2){
                return i;
            }
        }
        return 0;
            
        }
    
};