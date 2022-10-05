class Solution {
public:
    int sumof(int num){
        int s=0;
        int z=num;
        while(z>0){
            int d=z%10;
            s=s+d;
            z=z/10;
        }
        return s;
    }
    int addDigits(int num) {
        int s=sumof(num);
        if(s<10){
            return s;
        }
        else
            return addDigits(s);
        
        
    }
};