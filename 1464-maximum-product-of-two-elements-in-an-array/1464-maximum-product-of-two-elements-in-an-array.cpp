class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        long long res=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                long long prod=(nums[i]-1)*(nums[j]-1);
                if(prod>res){
                    res=prod;
                }
            }
        }
        return res;
    }
};