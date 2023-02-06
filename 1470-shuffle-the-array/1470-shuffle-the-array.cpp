class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res;
        vector<int>a;
        vector<int>b;
        for(int i=0;i<2*n;i++){
                if(i<n){
                    a.push_back(nums[i]);
                }
               else{
                   b.push_back(nums[i]);
               }
            }
        int a1=0;
        int b1=0;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                res.push_back(a[a1++]);
            }
            else{
                res.push_back(b[b1++]);
            }
        }
        return res;
    }
};