class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int c=0;
        string str=to_string(num);
        for(int i=0;i<str.size()-k+1;i++){
            string st="";
            for(int j=i;j<i+k;j++){
                st+=str[j];
            }
            int n=stoi(st);
            if(n!=0 && num%n==0){
                c++;
            }
        }
        return c;
    }
};