class Solution {
public:
    int trailingZeroes(int n) {
        int sum=0;
        for(long long i=5;n/i>0;i=i*5){ //the value of i will be greater then n for the loop to terminate which might not be incorporated in int variable.
            sum+=n/i;
        }
        return sum;
    }
};