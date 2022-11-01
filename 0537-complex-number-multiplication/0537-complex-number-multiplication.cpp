//Use pairs to store the real and complex part.
class Solution {
public:
    pair<int,int>parts(string s){
        int i=s.find('+');
        double real=stoi(s.substr(0,i));
        double imag=stoi(s.substr(i+1,s.size()-2-i));
        pair<int,int>result(real,imag);
        return result;
    }
    string complexNumberMultiply(string num1, string num2) {
        pair<int,int>a=parts(num1),b=parts(num2);
        int ra=a.first,ia=a.second;
        int rb=b.first,ib=b.second;
        return to_string(ra*rb-ia*ib)+'+'+to_string(ra*ib+ia*rb)+'i';
    }
};