class Solution {
public:
    string getnew(string &a){
        int l=a.size();
        string res="";
        int count=0;
        for(int i=l-1;i>=0;i--){
            char ch=a[i];
            if(a[i]=='#'){
                count++;
            }
            else{
                if(count>0){
                    count--;
                }
                else{
                res+=ch;
            }
            }
        }
        return res;
    }
    bool backspaceCompare(string s, string t) {
       return getnew(s)==getnew(t);
    }
};