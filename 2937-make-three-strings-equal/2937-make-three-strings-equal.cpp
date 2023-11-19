class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int l=s1.size();
        l=min(l,(int)s2.size());
        l=min(l,(int)s3.size());
        int sum=s1.size()+s2.size()+s3.size();
        if(s1[0]!=s2[0] || s2[0]!=s3[0] || s1[0]!=s3[0]){
            return -1;
        }
        for(int i=0;i<l;i++){
            if(s1[i]==s2[i] && s2[i]==s3[i]){
                sum=sum-3;
            }
            else{
                break;
            }
        }
        return sum;
    }
};