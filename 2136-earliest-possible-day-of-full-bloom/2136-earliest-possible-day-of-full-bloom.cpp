//Pair used.The growtime is stored in deacreasing order hence is stored as negative.
class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n=growTime.size();
        vector<pair<int,int>>a(n);
        for(int i=0;i<n;i++){
            a[i].first=-growTime[i];
            a[i].second=plantTime[i];
        }
        int total=0;
        int cur=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            total=max(total,cur+a[i].second-a[i].first);
            cur=cur+a[i].second;
        }
        return total;
    }
};