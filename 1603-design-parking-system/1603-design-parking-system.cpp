class ParkingSystem {
public:
    int b, m ,s;
    ParkingSystem(int big, int mid, int small) {
        b = big;
        m = mid;
        s= small;
    }
    
    bool addCar(int carType) {
        if(carType == 1) {
            if(b == 0) return false;
            b--;
            
        } else if(carType == 2) {
            if(m == 0) return false;
            m--;
        } else {
            if(s == 0) return false;
            s--;
        }
        return true;
    }
};