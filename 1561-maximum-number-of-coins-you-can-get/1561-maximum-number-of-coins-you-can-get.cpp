class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        deque<int>queue;
        for(int num:piles){
            queue.push_back(num);
        }
       int res=0;
        while(!queue.empty()){
            queue.pop_back();
            res+=queue.back();
            queue.pop_back();
            queue.pop_front();
        }
        return res;
    }
};