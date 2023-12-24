class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
       int count=0;
        int n=word.size();
        for(int i=1;i<n;i++){
            if(word[i]==word[i-1] || word[i]+1==word[i-1]|| word[i]-1==word[i-1]){
                count++;
                word[i]='0';
            }
        }
        return count;
    }
};