class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        int n=candies.size();
        for(int i=0;i<candies.size();i++){
            maxi=max(candies[i],maxi);
        }
        vector<bool>v(n);
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxi){
                v[i]=true;
            }
            else{
                v[i]=false;
            }
        }
        return v;
    }
};