class Solution {
public:
    int reverse(int n){
        int z=n;
        int rev=0;
        while(z!=0){
            int d=z%10;
            rev=rev*10+d;
            z=z/10;
        }
        return rev;
    }
    bool sumOfNumberAndReverse(int num) {
        int s=0;
        if(num==0){
            return true;
        }
        for(int i=0;i<num;i++){
            s=i+reverse(i);
            if(s==num){
                return true;
            }
        }
        return false;
    }
};