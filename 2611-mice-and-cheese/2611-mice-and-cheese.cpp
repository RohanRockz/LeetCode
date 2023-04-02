class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
      int sum=0;
        vector<int>temp;
        for(int i=0;i<reward1.size();i++){
            sum+=reward2[i];
            temp.push_back(reward1[i]-reward2[i]);
        }
        sort(temp.rbegin(),temp.rend());
        for(int i=0;i<k;i++){
            sum+=temp[i];
        }
        return sum;
    }
};