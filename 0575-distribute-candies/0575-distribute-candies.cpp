class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       unordered_set<int>unique;
        for(auto i:candyType){
            unique.insert(i);
        }
        return min(unique.size(),candyType.size()/2);
    }
};