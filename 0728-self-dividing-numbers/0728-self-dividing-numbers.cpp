class Solution {
public:
    bool selfDividing(int n){
        int z=n;
        while(z>0){
            int d=z%10;
            if(d==0){
                return false;
            }
            if((n%d)!=0){
                return false;
            }
            z=z/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>a;
        for(int i=left;i<=right;i++){
            if(selfDividing(i)==true){
                a.push_back(i);
            }
        }
        return a;
    }
};