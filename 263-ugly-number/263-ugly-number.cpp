class Solution {
public:
    bool isUgly(int n) {
        vector<int>prime={2,3,5};
        if(n<1){
            return false;
        }
        for(int i=0;i<prime.size();i++){
            while(n%prime[i]==0){
                n=n/prime[i];
            }
        }
        return n==1;
        
    }
};