class Solution {
public:
    bool isPowerOfFour(int n) {
       int z=n;
        if(z==0){
            return false;
        }
        while(z!=1){
            if(z%4!=0){
                return false;
            }
            z=z/4;
        }
        return true;
    }
};