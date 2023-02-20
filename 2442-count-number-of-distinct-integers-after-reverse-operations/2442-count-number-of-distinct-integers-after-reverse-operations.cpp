class Solution {
public:
    int reverse(int n){
        int z=n;
        int r=0;
        while(z>0){
            int d=z%10;
            r=(r*10)+d;
            z=z/10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
            st.insert(reverse(nums[i]));
        }
        return st.size();
    }
};