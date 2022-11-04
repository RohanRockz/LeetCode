class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>a;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            a[c]=i;
        }
        vector<int>part;
        int prev=-1;
        int mx=0;
        for(int i=0;i<s.size();i++){
            mx=max(mx,a[s[i]]);
            if(mx==i){
                part.push_back(mx-prev);
                prev=mx;
            }
        }
        return part;
    }
};