class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x=0,y=0;
        for(int a:nums1){
            x=x^a;
        }
        for(int b:nums2){
            y=y^b;
        }
        return (nums1.size()%2*y)^(nums2.size()%2*x);
    }
};