//An application ot this is the Climbing Stairs problem.Better time complexity then recursive.
class Solution {
public:
    int fib(int n) {
        int p1=0,p2=1;
        int f=0;
        if(n<2){
            return n;
        }
        for(int i=1;i<n;i++){
            f=p1+p2;
            p1=p2;
            p2=f;
            
        }
        return f;
    }
};