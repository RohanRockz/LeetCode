class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='A'|| s[i]=='e'||s[i]=='E'|| s[i]=='i'||s[i]=='I' || s[i]=='o'||s[i]=='O' || s[i]=='u'|| s[i]=='U'){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(),v.end());
        int c=0;
        string str="";
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='A'|| s[i]=='e'||s[i]=='E'|| s[i]=='i'||s[i]=='I' || s[i]=='o'||s[i]=='O' || s[i]=='u'|| s[i]=='U'){
                str+=v[c];
                c++;
            }
            else
            str+=s[i];
            
        }
        return str;
    }
};