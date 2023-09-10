class Solution {
public:
    int kthFactor(int n, int k) {
        int c=0;
        int factor=-1;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                c++;
                if(c==k){
                    factor=i;
                }
            }
        }
        return factor;
    }
};