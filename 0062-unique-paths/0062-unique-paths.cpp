
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>a(n,1);//initialize all variables to 1
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                a[j]=a[j]+a[j-1];
            }
        }
        return a[n-1];
    }
};