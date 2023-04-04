//Use of set to check for the duplicating characters
class Solution {
public:
    int partitionString(string s) 
    {
     vector<int> a (26, -1);
        int k = 1;
        int start = 0, end = 0;

        for(char c : s)
        {
            if(a[c-'a'] >= start)
            {
                k++;
                start = end;
            }
            a[c-'a'] = end;
            end++;
        }
        
        return k;
    }
};