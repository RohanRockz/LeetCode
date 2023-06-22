class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) 
    {
        int s0 = 0, s1 = INT_MIN;
        for(auto &p : prices)
        {
            s0 = max(s0, s1 + p);
            s1 = max(s1, s0 - p - fee);
        }
        return s0;
    }
};