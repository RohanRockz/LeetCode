class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int min=max(abs(fx-sx),abs(fy-sy));
        return min>0?t>=min:t!=1;
    }
};