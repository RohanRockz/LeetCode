class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
       int n=arr.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                temp.push_back(arr[i]);
            }
            else if(temp.empty() || temp.back()<0){
                temp.push_back(arr[i]);
            }
            else if(temp.back()<=-arr[i]){
                if(temp.back()<-arr[i]){
                    i--;
                }
                temp.pop_back();
            }
        }
        return temp;
    }
};