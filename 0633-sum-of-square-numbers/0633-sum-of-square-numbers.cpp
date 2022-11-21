class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0){
            return false;
        }
        long int left=0,right=sqrt(c);
        while(left<=right){
            long int sum=left*left+right*right;
            if(sum==c){
                return true;
            }
            else if(sum<c){
                left++;
            }
            else
                right--;
        }
        return false;
    }
};