class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<int>res;
        map<int,int>a;//ordered map used to store numbers in ascending order
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                a[nums[i][j]]++;
            }
        }
        for(auto &s:a){
            if(s.second==n){
                res.push_back(s.first);
            }
        }
        return res;
    }
};