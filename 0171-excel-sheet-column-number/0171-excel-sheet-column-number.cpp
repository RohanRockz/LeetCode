class Solution {
public:
    int titleToNumber(string columnTitle) {
         unsigned int s=0, a=1;
        for(int i=columnTitle.size()-1;i>=0;i--)
        {
            s+=a*(columnTitle[i]-64);
            a*=26;
        }
        return s;
    } 
    
};