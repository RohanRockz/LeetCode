class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string>st[26];
        for(auto i:ideas){
            st[i[0]-'a'].insert(i.substr(1));
        }
        long long c=0L;
        for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                long long a=0L,b=0L;
                for(auto s1:st[i]){
                    if(st[j].find(s1)==st[j].end()){
                        a++;
                    }
                }
                for(auto s2:st[j]){
                    if(st[i].find(s2)==st[i].end()){
                        b++;
                    }
                }
                c=c+(a*b);
            }
        }
        return c*2;
    }
};