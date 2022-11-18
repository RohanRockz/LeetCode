class Solution {
public:
    
    int nthUglyNumber(int n) {
         static vector<int>ugly;
        long long i,j,k,mx=INT_MAX;
        if(ugly.empty()){
            for(i=1;i<=mx;i=i*2){
                for(j=i;j<=mx;j=j*3){
                    for(k=j;k<=mx;k=k*5){
                        ugly.push_back(k);
                    }
                }
            }
        }
        sort(begin(ugly),end(ugly));
        return ugly[n-1];
    }
};