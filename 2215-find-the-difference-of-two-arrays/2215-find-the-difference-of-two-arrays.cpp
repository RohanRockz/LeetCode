class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>answer(2);
        int p=0,q=0;
        for(int i=0;i<nums1.size();i++){
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end()&&find(answer[0].begin(),answer[0].end(),nums1[i])==answer[0].end()){
                answer[0].push_back(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end()&&find(answer[1].begin(),answer[1].end(),nums2[i])==answer[1].end()){
                answer[1].push_back(nums2[i]);
            }
        }
        return answer;
    }
};