class Solution {
public:
    int pivotInteger(int n) {
       int sum=(n*n+n)/2;
        int ans=sqrt(sum);
        if(ans*ans==sum){
            return ans;
        }
        else
            return -1;
        
    }
};