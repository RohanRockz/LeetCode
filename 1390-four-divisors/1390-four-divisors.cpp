class Solution {
public:
    int count(int n){
        int i;
        int s=0;
        int c=0;
        for(i=1;i*i<n;i++){
            if(n%i==0){
                c=c+2;
                s=s+i+n/i;
            }
        }
        if(i*i==n){
            c++;
        }
        if(c==4){
            return s;
        }
        else{
            return 0;
        }
    }
        
    int sumFourDivisors(vector<int>& nums) {
        int final=0;
        for(int i=0;i<nums.size();i++){
            if(count(nums[i])){
                final+=count(nums[i]);
            }
        
                
        
        }
        return final;
    }
};