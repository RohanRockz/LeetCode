class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>h;
        h.push_back(0);
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+gain[i];
            h.push_back(sum);
        }
        int s=h.size();
        int maxi=0;
        for(int i=0;i<s;i++){
            if(h[i]>maxi){
                maxi=h[i];
            }
        }
        return maxi;
    }
};