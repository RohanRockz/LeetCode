class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>res;
        multiset<int>q;
        for(int i=0;i<k;i++){
            q.insert(nums[i]);
        }
        res.push_back(*q.rbegin());
        for(int i=k;i<n;i++){
            q.erase(q.find(nums[i-k]));
            q.insert(nums[i]);
            res.push_back(*q.rbegin());
        }
        return res;
    }
};