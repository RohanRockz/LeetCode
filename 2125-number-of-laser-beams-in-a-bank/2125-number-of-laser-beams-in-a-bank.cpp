class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0;
        int res=0;
        for(string s:bank){
            int count=0;
            for(char c:s){
                if(c=='1'){
                    count++;
                }
            }
            if(count!=0){
                res+=(prev*count);
                prev=count;
            }
        }
        return res;
    }
};