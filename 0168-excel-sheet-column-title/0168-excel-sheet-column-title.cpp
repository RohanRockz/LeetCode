class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        while(columnNumber>0){
            columnNumber--;
            int temp=columnNumber%26;
            columnNumber=columnNumber/26;
            res.push_back(temp+'A');
        }
        reverse(res.begin(),res.end());
        return res;
    }
};