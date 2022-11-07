//The idea is to just change the first 6 encountered to 9 and then return.
class Solution {
public:
    int maximum69Number (int num) {
        string n=to_string(num);
        for( auto &i:n){
            if(i=='6'){
                i='9';
                break;    
            }
        }
        return stoi(n);
    }
};