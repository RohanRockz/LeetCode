class Solution {
public:
    int compress(vector<char>& chars) {
       int n=chars.size();
        string ans;
        int count=1;
        for(int i=0;i<n;i++){
            while(i<n-1 && chars[i+1]==chars[i]){
                count++;
                i++;
            }
            ans+=chars[i];
            if(count==1){
                continue;
            }
            ans+=to_string(count);
            count=1;
        }
        chars.clear();
    
     for(int i=0;i<ans.size();i++)
     {
          chars.push_back(ans[i]);
     } 
 
    return chars.size();
    
    }
};