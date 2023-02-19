// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int lo=1,up=n,mid;
        while(lo<up){
            mid=lo+(up-lo)/2;
            if(!isBadVersion(mid)){
                lo=mid+1;
            }
            else{
                up=mid;
            }
        }
        return lo;
    }
};