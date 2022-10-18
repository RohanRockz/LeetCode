//Use of vectors and functions like second.back and second.front for map hashing.Best time complexity of this problem.
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
      int ans = 0;
        int maxFrequency = INT_MIN;
        unordered_map<int,vector<int>> m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        for(auto& p : m) {
           int frequency = p.second.size();
           int len = p.second.back()-p.second.front()+1;
           if (frequency > maxFrequency) {
               maxFrequency = frequency;
               ans = len;
           }
           else if(frequency == maxFrequency) {
               ans = min(ans,len);
           }
        }
        return ans;
    }
        
};