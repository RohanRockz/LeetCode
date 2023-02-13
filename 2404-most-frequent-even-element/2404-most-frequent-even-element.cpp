class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi=0;
        int small=INT_MAX;
        int f=0;
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->first%2==0 && i->second>=maxi){
                if(i->second==maxi){
                    small=min(small,i->first);
                }
                else{
                 maxi=i->second;
                 small=i->first;
                }
                f=1;
            }
        }
        if(f==1){
            return small;
        }
        return -1;
    }
};