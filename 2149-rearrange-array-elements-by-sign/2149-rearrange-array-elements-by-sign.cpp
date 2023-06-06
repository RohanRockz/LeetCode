class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        vector<int>res(l);
        int p=0,n=0;
        for(int i=0;i<l;i++){
            if(i%2==0){
                res[i]=pos[p++];
            }
            else{
                res[i]=neg[n++];
            }
        }
        return res;
    }
};