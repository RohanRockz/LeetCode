class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int n=nums.size();
        long long res,po=1;
        vector<long long>pre(n+1,0),suff(n+1,0);
        int x=2;
        for(int i=0;i<k;i++){
            po=po*x;
        }
           for (int i = 0; i < n; i++){
            pre[i + 1] = pre[i] | nums[i];
        }
        
        suff[n] = 0;
        for (int i = n - 1; i >= 0; i--){
            suff[i] = suff[i + 1] | nums[i];
        }
        
        res = 0;
        for (int i = 0; i < n; i++){
            res = max(res, pre[i] | (nums[i] * po) | suff[i + 1]);
        }
        
 
        return res;
    }
        
        
};