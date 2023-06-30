class Solution {
public:
    bool subsetSum(int n,int k,vector<int>&nums){
        vector<int>prev(k+1,0),cur(k+1,0);
        prev[0]=cur[0]=true;
        if(nums[0]<=k)
        prev[nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int t=1;t<=k;t++){
                bool notTake=prev[t];
                bool take=false;
                if(nums[i]<=t){
                    take=prev[t-nums[i]];
                    
                }
                cur[t]=take|notTake;
            }
            prev=cur;
        }
        return prev[k];
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        if(total%2){
            return false;
        }
        int target=total/2;
        if(subsetSum(n,target,nums)){
            return true;
        }
        return false;
    }
};