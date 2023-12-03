class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0;
        for(int i=0;i<points.size()-1;i++){
            int currx=points[i][0];
            int curry=points[i][1];
            int targetx=points[i+1][0];
            int targety=points[i+1][1];
            res+=max(abs(targetx-currx),abs(targety-curry));
        }
        return res;
    }
};