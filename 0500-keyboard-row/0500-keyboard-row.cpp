//Use of set to check for string
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set s1={'Q','q','W','E','R','T','Y','I','O','U','P','w','e','r','t','y','u','i','o','p'};
        unordered_set s2={'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
        unordered_set s3={'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
        vector<string>ans;
        for(auto& word:words){
            bool b1=true,b2=true,b3=true;
            for(auto& ch:word){
                if(b1){
                    if(s1.find(ch)==s1.end()){
                        b1=false;
                    }
                }
                if(b2){
                    if(s2.find(ch)==s2.end()){
                        b2=false;
                    }
                }
                if(b3){
                    if(s3.find(ch)==s3.end()){
                        b3=false;
                    }
                }
            }
            if(b1 || b2|| b3){
                ans.push_back(word);
            }
        }
        return ans;
    }
};