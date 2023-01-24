class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return 1;
        }
        vector<int>count(n+1,0);
        for(auto s:trust){
            count[s[1]]++;
            count[s[0]]--;
        }
        for(int i=0;i<n+1;i++){
            if(count[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};