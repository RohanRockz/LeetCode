class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int mindex=0;
        int maxindex=0;
        for(int i=0;i<n;i++){
            if(nums[i]<mini){
                mini=nums[i];
                mindex=i;
            }
            if(nums[i]>maxi){
                maxi=nums[i];
                maxindex=i;
            }
        }
        int mins=mindex-0+1;
        int mine=n-mindex;
        int maxs=maxindex-0+1;
        int maxe=n-maxindex;
        int diff=abs(mindex-maxindex);
        int min1=min(mins+maxe,maxs+mine);
        int min2=min(mins+diff,maxs+diff);
        int min3=min(maxe+diff,mine+diff);
        // (n1 > n2) ?
        //   (n1 > n3 ? n1 : n3) :
        //   (n2 > n3 ? n2 : n3);
        int total= min1<min2?min1<min3?min1:min3:min2<min3?min2:min3;
         return total;
    }
};