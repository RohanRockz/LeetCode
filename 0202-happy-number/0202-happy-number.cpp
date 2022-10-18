class Solution {
public:
    bool isHappy(int n) {
       if((n==1)||(n==7)){
           return true;
       }
        else if(n<10){
            return false;
        }
        else
            return isHappy(happy(n));
    }
    int happy(int n){
        if(!n){
            return 0;
        }
        return (n%10)*(n%10)+happy(n/10);
    }
};