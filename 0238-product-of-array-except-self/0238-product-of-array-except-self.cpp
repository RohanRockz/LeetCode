//Mainting no extra space other than the final array and computing the result dynamically for the left half storing the right half using for loop.
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>a(n);
        a[n-1]=1;
        for(int i=n-2;i>=0;i--){
            a[i]=a[i+1]*nums[i+1];
        }
        int left=1;
        for(int i=0;i<n;i++){
            a[i]=a[i]*left;
            left=left*nums[i];
        }
        return a;
    }
};