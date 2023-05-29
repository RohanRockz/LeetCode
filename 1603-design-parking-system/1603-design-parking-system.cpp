class ParkingSystem {
public:
    int bigLimit, mediumLimit,smallLimit;
    int* parkingArray;
    ParkingSystem(int big, int medium, int small) {
        this->bigLimit=big;
        this->mediumLimit=medium;
        this->smallLimit=small;
        
        this->parkingArray=(int*)malloc((big+small+medium) * sizeof(int));
        for(int i=0;i<big+medium+small;i++){
            this->parkingArray[i]=-1;
        }
    }
    
    bool addCar(int carType) {
        int limit=0;
        if(carType==1){
            limit=this->bigLimit;
        }
        else if(carType==2){
            limit=this->mediumLimit;
        }
        else{
            limit=this->smallLimit;
        }
        int count=0;
        for(int i=0;i<this->bigLimit+this->mediumLimit+this->smallLimit;i++){
            if(this->parkingArray[i]==carType){
                count++;
            }
            if(count==limit){
                return false;
            }
            if(this->parkingArray[i]==-1){
                this->parkingArray[i]=carType;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */