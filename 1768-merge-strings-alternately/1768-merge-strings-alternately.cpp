class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i=0;
        int j=0;
        string s="";
        while(i<n || j<m){
            if(i<n){
            s.push_back(word1[i]);
                i++;
            }
            if(j<m){
            s+=word2[j];
            j++;
            }
        }
        
        return s;
    }
};