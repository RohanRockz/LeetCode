class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      int c=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                bool l=(i==0)||(flowerbed[i-1]==0);
                bool r=(i==flowerbed.size()-1)||(flowerbed[i+1]==0);
                if(l && r){
                    c++;
                    flowerbed[i]=1;
                }
            }
        }
        return c>=n;//learnt this way of returning first time in this code.
    }
};