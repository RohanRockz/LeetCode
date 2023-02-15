class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int j=jewels.size();
        int s=stones.size();
        int c=0;
        for(int i=0;i<s;i++){
            for(int p=0;p<j;p++){
                if(stones[i]==jewels[p]){
                    c++;
                    continue;
                }
            }
        }
        return c;
    }
};