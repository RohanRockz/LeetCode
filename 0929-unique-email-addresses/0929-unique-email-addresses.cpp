class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(auto &email:emails){
            string valid;
            for(auto c:email){
                if(c=='+'||c=='@'){
                    break;
                }
                if(c=='.'){
                    continue;
                }
                valid+=c;
            }
            valid+=email.substr(email.find('@'));
            st.insert(valid);
        }
        return st.size();
    }
};