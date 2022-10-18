//Basic way to solve the problem.The best way is to use BIT operator which is solved next.
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        vector<int>s;
        for(auto &[x,f]:a){
            if(f==1){
                s.push_back(x);
            }
        }
        if(s.size()==2){
            return s;
        }
        return s;
        
            }
        
    
};