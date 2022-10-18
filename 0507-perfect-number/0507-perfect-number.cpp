//Optimal Solution with root(n) complexity.Better Solution exist using Euclid-Euler theorem which is done next.
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=0){
            return false;
        }
        int sum=0;
        for( int i=1;i*i<=num;i++){
            if(num%i==0){
                sum+=i;
                if(i*i!=num){
                    sum=sum+(num/i);
                }
            }
        }
        return sum-num==num;
    }
};