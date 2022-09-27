class Solution {
public:
    int mySqrt(int x) {
        long long s=0, mid=0,e=x,a=0;
        while(s<=e){
            mid=(s+e)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                s=mid+1;
                a=mid;
            }
            else{
                e=mid-1;
            }
        }
        return a;
        
    }
};