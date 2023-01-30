class Solution {
public:
    void primeFactor(set<int>&s,int n){
        int div=2;
        while(n>1){
            if(n%div==0){
                s.insert(div);
                n=n/div;
            }
            else{
                div++;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            primeFactor(s,nums[i]);
        }
        return s.size();
    }
};