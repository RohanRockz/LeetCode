class Solution {
public:
    bool isPossible(vector<int>& bloomDay,int day,int m,int k){
        int count=0;
        int n=bloomDay.size();
        int number=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                number+=(count/k);
                count=0;
            }
        }
        number+=(count/k);
        if(number>=m ){
            return true;
        }
         return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
         int n=bloomDay.size();
        int low=INT_MAX;
        int high=INT_MIN;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<low){
                low=bloomDay[i];
            }
            if(bloomDay[i]>high){
                high=bloomDay[i];
            }
        }
        long long p=(long long)m*k;
        if(n<p)
            return -1;
        while(low<=high){
          int  mid=(low+high)/2;
            if(isPossible(bloomDay,mid,m,k)==true){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return low;
    }
};