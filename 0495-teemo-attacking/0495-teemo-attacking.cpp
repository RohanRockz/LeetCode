class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        if(n==0){
            return 0;
        }
        int sum=0;
        for(int i=0;i<timeSeries.size()-1;i++){
            if(timeSeries[i+1]-timeSeries[i]<duration){
                sum+=timeSeries[i+1]-timeSeries[i];
            }
            else{
                sum+=duration;
            }
        }
        return sum+duration;
    }
};