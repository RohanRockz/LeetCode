class Solution {
public:
    bool check(char c){
        return c=='a'|| c=='e'||c=='i'|| c=='o' || c=='u'|| c=='A'|| c=='E' || c=='I'||c=='O' || c=='U';
    }
    string reverseVowels(string s) {
        int st=0;
        int e=s.size()-1;
        while(st<e){
            while(st<s.size()&& !check(s[st])){
                st++;
            }
            while(e>=0 && !check(s[e])){
                e--;
            }
            if(st<e){
                swap(s[st++],s[e--]);
            }
        }
        return s;
    }
};