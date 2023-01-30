class Solution {
public:
    vector<int> closestDivisors(int num) {
        int num1=num+1;
        int num2=num+2;
        vector<int>res;
        int diff=INT_MAX;
        for(int i=sqrt(num1);i>=1;i--){
            if(num1%i==0){
                res={i,num1/i};
                diff=num1/i-i;
                break;
            }
        }
        for(int i=sqrt(num2);i>=1;i--){
            if(num2%i==0){
                if(num2/i-i<diff){
                    diff=num2/i-i;
                    res={i,num2/i};
                    break;
                }
            }
        }
        return res;
    }
};