//For k==1,we rotate the string and accordingly find the lexographically smallest string and for k>1 we simply sort the string to get the lexographically smallest string.
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        string ans=s;
        for(int i=0;i<s.size();i++){
            ans=min(ans,s.substr(i)+s.substr(0,i));
        }
        return ans;
    }
};