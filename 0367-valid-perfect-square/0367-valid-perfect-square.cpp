class Solution {
public:
    bool isPerfectSquare(int num) {
         long int l=0;
        if(num<0){
            return false;
        }
        while(l*l<=num){
            if(l*l==num){
                return true;
            }
            l++;
        }
        return false;
    }
};