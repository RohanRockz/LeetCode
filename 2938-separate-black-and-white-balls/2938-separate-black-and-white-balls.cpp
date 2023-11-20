class Solution {
public:
    long long minimumSteps(string s) {
        int n=s.size();
        long long res=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
            else{
                res+=count;
            }
        }
        return res;
    }
};