//Use of set is the best way to solve this problem.Basic problem of hashing.
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>a(sentence.begin(),sentence.end());
        return a.size()==26;
        
    }
};