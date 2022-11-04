class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>a;
        int n=s.size();
        for(int i=0;i<n;i++){
            a[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(a[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};