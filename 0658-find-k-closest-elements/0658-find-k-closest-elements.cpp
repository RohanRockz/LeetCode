//sort the array with respect to distance from x
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        stable_sort(arr.begin(),arr.end(),[x](const auto a,const auto b){
            return abs(a-x)<abs(b-x);
        });
        arr.resize(k);
        sort(arr.begin(),arr.end());
        return arr;
    }
};