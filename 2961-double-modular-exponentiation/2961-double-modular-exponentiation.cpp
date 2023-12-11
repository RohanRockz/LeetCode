#include<cmath> 
class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        int n=variables.size();
        vector<int>res;
        for(int i=0;i<n;i++){
           int ai=variables[i][0];
            int bi=variables[i][1];
            int ci=variables[i][2];
            int mi=variables[i][3];
            int base=1;
            for(int j=0;j<bi;j++){
                base=(base*ai)%10;
            }
            int result=1;
            for(int j=0;j<ci;j++){
                result=(result*base)%mi;
            }
            if(result==target){
                res.push_back(i);
            }
        }
        return res;
    }
};