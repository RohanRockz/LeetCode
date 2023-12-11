class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int limit=n/4;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
          if(mp[arr[i]]>limit){
              return arr[i];
          }   
        }
        return 0;
    }
};