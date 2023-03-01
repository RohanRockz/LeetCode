class Solution {
    void countingSort(vector<int> &arr){
        unordered_map<int,int>mp;
        int mini=*min_element(arr.begin(),arr.end());
        int maxi=*max_element(arr.begin(),arr.end());
        for(auto &i:arr){
            mp[i]++;
        }
        int pos=0;
        for(int i=mini;i<=maxi;i++){
            while(mp[i]>0){
                arr[pos]=i;
                pos++;
                mp[i]-=1;
            }
        }
    }
public:
    vector<int> sortArray(vector<int>& nums){
        countingSort(nums);
        return nums;
    }
 
};