class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            int cgcd=0;
            for(int j=i;j<n;j++){
                cgcd=gcd(cgcd,nums[j]);
            
            if(cgcd==k){
                c++;
            }
            }
        }
        return c;
    }
};