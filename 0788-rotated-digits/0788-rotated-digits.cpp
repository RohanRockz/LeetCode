class Solution {
public:
    int rotatedDigits(int n) {
       int f[] = {1,1,2,0,0,2,2,0,1,2};
        int res=0;
        for(int i=1;i<=n;i++){
            int z=i;
            int s=1;
            while(z!=0){
                s=s*f[z%10];
                z=z/10;
            }
            if(s>=2){
                res+=1;
            }
            
        }
        return res;
    }
};