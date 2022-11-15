class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int s=(int)n/3;
        unordered_map<int,int>res;
        vector<int>a;
        for(int i:nums){
            res[i]++;
            if(res[i]>s&& (find(a.begin(),a.end(),i)==a.end())){
                a.push_back(i);
            }
        } 
        return a;
    }
};