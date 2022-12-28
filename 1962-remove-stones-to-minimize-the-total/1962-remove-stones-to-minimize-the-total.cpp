//Easy problem with an application of heap.
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>heap(piles.begin(),piles.end());
        int totalSum=accumulate(piles.begin(),piles.end(),0);
        for(int i=0;i<k;i++){
            int a=heap.top();
            heap.pop();
            int re=a/2;
            totalSum=totalSum-re;
            heap.push(a-re);
        }
        return totalSum;
    }
};