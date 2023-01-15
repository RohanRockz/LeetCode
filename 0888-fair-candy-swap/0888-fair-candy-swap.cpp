class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int ali=0,bob=0;
        for(int i=0;i<aliceSizes.size();i++){
            ali+=aliceSizes[i];
        }
        for(int i=0;i<bobSizes.size();i++){
            bob+=bobSizes[i];
        }
        int diff=(ali-bob)/2;
        set<int>d;
        for(int i=0;i<bobSizes.size();i++){
            d.insert(bobSizes[i]+diff);
        }
        for(int i=0;i<aliceSizes.size();i++){
            if(d.find(aliceSizes[i])!=d.end()){
                return {aliceSizes[i],aliceSizes[i]-diff};
            }
        }
        return {-1,-1};
    }
};