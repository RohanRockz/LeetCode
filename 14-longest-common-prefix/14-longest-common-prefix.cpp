//First program of string...learnt syntax use of array of strings
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if( strs.size()==0)
            return "";
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<strs[i].size()&& strs[i][j]==prefix[j])
                j++;
            prefix=prefix.substr(0,j);
        }
        if(prefix.size()==0)
            return "";
        return prefix;
    }
};