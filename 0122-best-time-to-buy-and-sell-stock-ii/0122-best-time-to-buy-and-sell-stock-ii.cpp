class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        long aheadBuy,aheadNotBuy,curBuy,curNotBuy;
        aheadBuy=aheadNotBuy=0;
        for(int i=n-1;i>=0;i--){
            curNotBuy=max(prices[i]+aheadBuy,0+aheadNotBuy);
            curBuy=max(-prices[i]+aheadNotBuy,0+aheadBuy);
            aheadBuy=curBuy;
            aheadNotBuy=curNotBuy;
        }
        return aheadBuy;
    }
};