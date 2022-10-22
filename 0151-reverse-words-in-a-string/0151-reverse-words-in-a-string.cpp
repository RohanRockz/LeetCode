class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int i=0,j=0,n=s.size(),li=0;
        while(j<n){
        while((j<n)&&s[j]==' '){
            j++;
        }
        int si=i;
        while(j<n&&s[j]!=' '){
            s[i++]=s[j++];
            li=i;
        }
        reverse(s.begin()+si,s.begin()+i);
        s[i++]=' ';
    }
        s.resize(li);
        return s;
    }
};