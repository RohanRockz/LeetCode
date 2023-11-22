class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>>groups;
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                int sum=i+j;
                groups[sum].push_back(nums[i][j]);
            }
        }
        vector<int>res;
        int count=0;
        while(groups.find(count)!=groups.end()){
            for(int num:groups[count]){
                res.push_back(num);
            }
            count++;
        }
        return res;
        
    }
};