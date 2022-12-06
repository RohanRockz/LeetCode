class Solution {
public:
    bool judgeCircle(string moves) {
        int r=0,u=0;
        for(auto c:moves)
        {
            if(c=='R')
                r++;
            else if(c=='L')
                r--;
            else if(c=='U')
                u++;
            else
                u--;
        }
        return (!r && !u);
    }
};