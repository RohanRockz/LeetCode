class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       unordered_map<int,int>mp;
        vector<vector<int>>v1;
        int i=0;
        int count=0;
        for( i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        while(!mp.empty()){
            vector<int>temp;
            count=0;
            vector<int>del;
            for(auto i:mp){
                temp.push_back(i.first);
                count++;
                mp[i.first]--;
                if(mp[i.first]==0){
                    del.push_back(i.first);
                }
               
            }
            v1.push_back(temp);
            for(auto &i:del){
                mp.erase(i);
            }
            
        }
        return v1;
        
        
        
    }
};