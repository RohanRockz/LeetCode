//Use of ternary operator in the return statement
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        double p=myPow(x,n/2);
        if(n%2){
            return n>0? x*p*p:1/x*p*p;
        }
        else
            return p*p;
    }
};