//A simple application of fibonacci series ie summing of the result of the previous two integers.
class Solution {
public:
    int climbStairs(int n) {
        int p1=1,p2=2;
        int count=0;
        if(n<=2){
            return n;
        }
        for(int i=3;i<=n;i++){
            count=p1+p2;
            p1=p2;
            p2=count;
        }
        return count;
    }
};