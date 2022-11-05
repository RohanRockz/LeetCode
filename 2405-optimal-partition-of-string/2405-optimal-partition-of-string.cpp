//Use of set to check for the duplicating characters
class Solution {
public:
    int partitionString(string s) {
        int res=1;
        set<char>a;
        for(int i=0;i<s.size();i++){
            if(a.find(s[i])==a.end()){
                a.insert(s[i]);
            }
            else{
                res++;
                a.clear();//function used to clear the set 
                a.insert(s[i]);
            }
        }
        return res;
    }
};