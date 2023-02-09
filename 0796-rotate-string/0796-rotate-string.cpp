class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()==0){
           return true;
       }
        if(s.size()!=goal.size()){
            return false;
        }
        int n=s.size();
        while(n--){
            if(s==goal){
                return true;
            }
            s=s.substr(1)+s[0];
        }
        return false;
    }
};