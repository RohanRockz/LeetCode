class Solution {
public:
    int sumofd(vector<int>nums,int a){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+ceil((double)(nums[i])/(double)(a));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
         int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        int low=1,high=maxi;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(sumofd(nums,mid)<=threshold){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};