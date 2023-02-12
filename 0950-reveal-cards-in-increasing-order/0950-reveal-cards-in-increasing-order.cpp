//concept of deque used for the first time;
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.rbegin(),deck.rend());
        deque<int>dq;
        dq.push_back(deck[0]);
        for(int i=1;i<deck.size();i++){
            dq.push_front(dq.back());
            dq.pop_back();
            dq.push_front(deck[i]);
        }
        vector<int>res(dq.begin(),dq.end());
        return res;
    }
};