class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char>st={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n=s.size();
        int c1=0;
        int c2=0;
        for(int i=0;i<n/2;i++){
            if(find(st.begin(),st.end(),s[i])!=st.end()){
                c1++;
            }
        }
         for(int i=n/2;i<n;i++){
            if(find(st.begin(),st.end(),s[i])!=st.end()){
                c2++;
            }
        }
        return c1==c2;
    }
};