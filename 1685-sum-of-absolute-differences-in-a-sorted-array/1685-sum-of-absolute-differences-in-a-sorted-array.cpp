class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
       vector<int>prefix={nums[0]};
        for(int i=1;i<n;i++){
            prefix.push_back(prefix[i-1]+nums[i]);
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            int leftSum=prefix[i]-nums[i];
            int rightSum=prefix[n-1]-prefix[i];
            int left=i;
            int right=n-1-i;
            int leftT=left*nums[i]-leftSum;
            int rightT=rightSum-right*nums[i];
            res.push_back(leftT+rightT);
        }
            return res;
    }
};