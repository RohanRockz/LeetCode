class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        long long i=0,j=price[price.size()-1]-price[0];
        long long res=0;
        while(i<=j){
            long long mid=(i+j)/2;
            long long t=1;
            long long la=price[0];
            for(int i=1;i<price.size();i++){
                if(price[i]-la>=mid){
                    la=price[i];
                    t++;
                }
            }
            if(t>=k){
                res=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return res;
    }
};