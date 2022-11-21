class Solution {
public:
    int a[20]{};
    int numTrees(int n) {
       if(n<=1){
           return 1;
       }
        if(a[n])
            return a[n];
        for(int i=1;i<=n;i++){
            a[n]=a[n]+(numTrees(i-1)*numTrees(n-i));
        }
        return a[n];
    }
};