//Use of hashing(hash table) in unordered map.First map problem.Taken help from discussion forum.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>a;
        for(int i:nums){
            a[i]++;
        }
        for(auto j:a){
            if(j.second==1){
                return j.first;
            }
        }
        return -1;
    }
};