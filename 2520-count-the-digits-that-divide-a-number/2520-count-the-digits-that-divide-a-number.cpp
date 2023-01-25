class Solution {
public:
    int countDigits(int num) {
        int z=num;
        int c=0;
        while(z!=0){
            int d=z%10;
            if(num%d==0){
                c++;
            }
            z=z/10;
        }
        return c;
    }
};