class Solution {
public:
    string defangIPaddr(string address) {
        string notun;
        for(auto c:address){
            if(c=='.'){
                notun+="[.]";
            }
            else{
                notun+=c;
            }
        }
        return notun;
    }
        
};