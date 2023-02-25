class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int maxi=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
                if((i!=j)&&(colors[i]!=colors[j])){
                    maxi=max(maxi,abs(i-j));
                }
            }
        }
        return maxi;
    }
};