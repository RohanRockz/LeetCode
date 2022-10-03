class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        ans.push_back({});
        for(int i=0;i<n;i++){
            int n1=ans.size();
            for(int j=0;j<n1;j++){
                vector<int>temp=ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
            
        }
        return ans;
    
    }
};