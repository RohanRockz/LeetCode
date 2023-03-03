class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n=coordinates[0]-'a';
        int digit=coordinates[1];
        if((n+digit)%2==0){
            return true;
        }
        return false;
    }
};