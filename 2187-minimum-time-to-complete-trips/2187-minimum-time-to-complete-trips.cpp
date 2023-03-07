class Solution {
public:
    long long int count(vector<int>&a,long long int time){
        long long int total=0;
        for(auto x:a){
            long long int val=x;
            total+=(time/val);
        }
        return total;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int low=00;
        long long int high=1e14;
        while(low<high){
            long long int mid=low+(high-low)/2;
            if(count(time,mid)>=totalTrips){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};