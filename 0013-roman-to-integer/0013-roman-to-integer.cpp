//String to int can be done using mapping where two different data types can be matched.
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>a={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int sum=a[s.back()];
        for(int i=s.size()-2;i>=0;i--){
            if(a[s[i]]>=a[s[i+1]]){
                sum=sum+a[s[i]];
            }
            else
                sum=sum-a[s[i]];
        }
        return sum;
    }
};