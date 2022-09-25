class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int c=1;
        for(int i=0;i<nums.size();i++){
            if(c==k){
                return nums[i];
            }
            c++;
        }
        return 0;
    }
};