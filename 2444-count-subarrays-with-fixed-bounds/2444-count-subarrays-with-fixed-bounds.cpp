class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res=0;
        bool mini=false,maxi=false;
        int start=0,minstart=0,maxstart=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(num<minK || num>maxK){
                mini=false;
                maxi=false;
                start=i+1;
            }
            if(num==minK){
                mini=true;
                minstart=i;
            }
            if(num==maxK){
                maxi=true;
                maxstart=i;
            }
            if(mini && maxi){
                res+=min(maxstart,minstart)-start+1;
            }
        }
        return res;
    }
};