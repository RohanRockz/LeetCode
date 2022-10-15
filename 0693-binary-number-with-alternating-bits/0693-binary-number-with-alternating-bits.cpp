//Check the number 1 and 0 while converting the number to binary.
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int d=n%2;
        n=n/2;
        while(n>0){
            if(d==n%2){
                return false;
            }
            d=n%2;
            n=n/2;
        }
        return true;
        }
    
};