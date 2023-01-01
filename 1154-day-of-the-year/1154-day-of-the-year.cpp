class Solution {
public:
    int dayOfYear(string date) {
        int yy=stoi(date.substr(0,4));
        int mm=stoi(date.substr(5,2));
        int dd=stoi(date.substr(8,2));
        int res=dd;
        vector<int>month({31,28,31,30,31,30,31,31,30,31,30,31});
        if(leap(yy)){
            month[1]=29;
        }
        for(int i=0;i<mm-1;i++){
            res+=month[i];
        }
        return res;
    }
    bool leap(int yy){
     if(yy%400==0 || (yy%4==0 && yy%100!=0)){
         return true;
     }
        return false;
    }
};