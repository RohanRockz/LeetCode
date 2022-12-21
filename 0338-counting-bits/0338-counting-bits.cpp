class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>z(n+1);
        z[0]=0;
        for(int i=1;i<=n;i++){
            z[i]=z[i/2]+i%2;
        }
        return z;
    }
};