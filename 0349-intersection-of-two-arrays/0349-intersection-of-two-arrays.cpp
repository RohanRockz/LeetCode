class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>a(nums1.begin(),nums1.end());
        vector<int>res;
        for(int i:nums2){
            if(a.count(i)){
                res.push_back(i);
                a.erase(i);
            }
        }
        return res;
    }
};