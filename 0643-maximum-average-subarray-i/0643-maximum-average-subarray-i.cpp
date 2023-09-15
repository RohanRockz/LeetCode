class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double sum=0,res=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i<k){
                sum+=nums[i];
            }
            else{
                res=max(res,sum);
                sum=sum+nums[i]-nums[i-k];
            }
        }
        res=max(sum,res);
        return res/k;
    }
};