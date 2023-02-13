class Solution {
public:
    int countAsterisks(string s) {
        int n=s.size();
        if(n==0){
            return 0;
        }
        int as=0;
        int bar=0;
        for(int i=0;i<n;i++){
            if(s[i]=='|'){
                bar++;
            }
            if((bar%2==0)&&(s[i]=='*')){
                as++;
            }
        }
        return as;
    }
};