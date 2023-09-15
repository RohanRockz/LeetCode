class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int res=0;
        for(auto a:mp){
            int num=a.first;
            int count=a.second;
            if(k-num==num){
                res+=count/2;
            }
            else if(mp.count(k-num)){
                int mini=min(count,mp[k-num]);
                res+=mini;
                mp[num]-=mini;
                mp[k-num]-=mini;
            }
            
        }
        return res;
    }
};