//Nice idea to store in a set and check pairwise and then store it in a set.Best method to solve this problem!!.Use of set in an effective way.
class Solution {
public:
    double dist(vector<int>p1,vector<int>p2){
        return (p2[1]-p1[1])*(p2[1]-p1[1])+(p2[0]-p1[0])*(p2[0]-p1[0]);
    }
   
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>>p={p1,p2,p3,p4};
        set<double>l;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                double d=dist(p[i],p[j]);
                if(d!=0){
                    l.insert(d);
                }
                else
                    return false;
            }
        }
        return l.size()==2;
    }
};