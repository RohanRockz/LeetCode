class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int l=INT_MAX;
        int op=0;
        int p=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<l){
                l=prices[i];
            }
            p=prices[i]-l;
            if(p>op){
                op=p;
            }
        }
        return op;
    }
};