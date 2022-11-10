//Concept of Stack implied in a string ie push and pop function.
class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for(char a:s){
            if(!ans.empty() && a==ans.back()){
                ans.pop_back();
            }
            else{
                ans.push_back(a);
            }
        }
        return ans;
    }
};