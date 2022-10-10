class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f=0;
        int l=numbers.size()-1;
        while(f<l){
            if(numbers[f]+numbers[l]==target){
                return {f+1,l+1};
            }
            else if(numbers[f]+numbers[l]<target){
                f++;
            }
            else
                l--;
        }
        return {};
    }
};