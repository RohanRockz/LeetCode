class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int>st;
        for(int i=0;i<banned.size();i++){
            st.insert(banned[i]);
        }
        int sum=0;
        vector<int>v;
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end() && (sum+i)<=maxSum){
                v.push_back(i);
                sum=sum+i;
                st.insert(i);
            }
        }
        return v.size();
    }
};