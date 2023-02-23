class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(int i:tasks){
            mp[i]++;
        }
        int mini=0;
        for(auto m:mp){
            if(m.second==1){
                return -1;
            }
            if(m.second%3==0){
                mini+=m.second/3;
            }
            else{
                mini+=(m.second/3)+1;
            }
        }
        return mini;
    }
};