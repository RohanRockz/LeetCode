class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        for(auto i:s){
            freq[i-'a']++;
        }
        sort(freq.begin(),freq.end());
        int total=0;
        for(int i=24;i>=0;i--){
            if(freq[i]==0){
                continue;
            }
            if(freq[i]>=freq[i+1]){
                int prev=freq[i];
                freq[i]=max(0,freq[i+1]-1);
                total+=prev-freq[i];
            }
        }
        return total;
    }
};