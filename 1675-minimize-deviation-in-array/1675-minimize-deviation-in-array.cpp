class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                st.insert(nums[i]);
            }
            else{
                st.insert(nums[i]*2);
            }
        }
        int diff=*st.rbegin()-*st.begin();
        while(*st.rbegin()%2==0){
            int x=*st.rbegin();
            st.erase(x);
            st.insert(x/2);
            diff=min(diff,*st.rbegin()-*st.begin());
        }
        return diff;
    }
};