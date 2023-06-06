class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>v;
        for(auto i=0,j=0;i<l.size();i++){
            vector<int>n(begin(nums)+l[i],begin(nums)+r[i]+1);
            sort(n.begin(),n.end());
            for( j=2;j<n.size();j++){
                if(n[j]-n[j-1]!=n[1]-n[0]){
                    break;
                }
            }
            v.push_back(j==n.size());
        }
        return v;
    }
};