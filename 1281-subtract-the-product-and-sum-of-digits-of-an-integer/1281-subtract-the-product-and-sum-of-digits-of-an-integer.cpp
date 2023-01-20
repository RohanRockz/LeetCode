class Solution {
public:
    int subtractProductAndSum(int n) {
        int z=n;
        int sum=0,p=1;
        while(z!=0){
            int d=z%10;
            sum+=d;
            p*=d;
            z=z/10;
        }
        return p-sum;
    }
};