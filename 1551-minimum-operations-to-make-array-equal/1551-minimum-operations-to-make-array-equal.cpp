class Solution {
public:
    int minOperations(int n) {
        if(n%2!=0){
            int x=(n-1)/2;
            return x*(x+1);
        }
        else{
            int x=n/2;
            return x*x;
        }
    }
};