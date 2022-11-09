//Best approach is to use set and just display the second largest element in the set;
class Solution {
public:
    int secondHighest(string s) {
       set<int>a;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9'){
                a.insert(s[i]-'0');
            }
            
    }
        return a.size()>1?*next(rbegin(a)):-1;//the *next operator is used to display the next element in the set starting from last due to fucntion rbegin.
        }
};