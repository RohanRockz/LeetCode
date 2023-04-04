//Use of set to check for the duplicating characters
class Solution {
public:
    int partitionString(string s) {
        int res=1;
        vector<int> a(26, 0);
        for(int i=0;i<s.size();i++){
            if(!a[s[i] - 'a']){
                a[s[i] - 'a']++;
            }
            else{
                res++;
                a = vector<int> (26, 0);//function used to clear the set 
                a[s[i] - 'a']++;
            }
        }
        return res;
    }
};