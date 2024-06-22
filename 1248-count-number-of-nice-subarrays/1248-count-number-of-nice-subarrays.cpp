class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int currSum=0;
        int subarrays=0;
        unordered_map<int,int>prefix;
        prefix[currSum]=1;
        
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i]%2;
            if(prefix.find(currSum-k)!=prefix.end()){
                subarrays=subarrays+prefix[currSum-k];
            }
            prefix[currSum]++;
        }
            
        
    return subarrays;
    }
};