class Solution {
public:
    bool isPowerOfTwo(int n) {
        int z=n;
        if(z==0){
            return false;
        }
        while(z!=1){
            if(z%2!=0){
                return false;
            }
            z=z/2;
        }
        return true;
    }
};