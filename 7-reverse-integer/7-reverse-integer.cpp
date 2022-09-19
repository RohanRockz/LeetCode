class Solution {
public:
    int reverse(int x) {
        int r=0; 
        int z=x;
        while(z!=0){
            int d=z%10;
            if((r>INT_MAX/10)||(r==INT_MAX/10 && d>7))
                return 0;
            if((r<INT_MIN/10)||(r==INT_MIN/10&& d<-8))
                return 0;
            r=r*10+d;
            z=z/10;
        }
        return r;
    }
};