class Solution {
public:
    int reverse(int n){
        int z=n;
        int r=0;
        while(z>0){
            int d=z%10;
            r=r*10+d;
            z=z/10;
        }
        return r;
    }
    bool isSameAfterReversals(int num) {
        int rev1=reverse(num);
        int rev2=reverse(rev1);
        return rev2==num;
    }
};