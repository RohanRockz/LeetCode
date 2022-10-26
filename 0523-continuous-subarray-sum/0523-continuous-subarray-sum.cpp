class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<2)
            return false;
        unordered_map<int,int>a;
        a[0]=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(k!=0)
                sum=sum%k;
            if(a.find(sum)!=a.end()){
                if(i-a[sum]>1)
                    return true;
            }
            else{
                a[sum]=i;
            }
        }
        return false;
    }
};