//Use of unordered map using <int,Elements> where Elements may contain various variables for that we define another class where the different variables of the class are stored.
class Elements{
     public:
       int freq;
       int li;
       int ri;
     Elements(){
         freq=0;
         li=0;
         ri=0;
     }
 };

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,Elements>a;
        for(int i=0;i<nums.size();i++){
            if(a.count(nums[i])==0){
                a[nums[i]].freq++;
                a[nums[i]].li=i;
                a[nums[i]].ri=i;
            }
            else{
                a[nums[i]].freq++;
                a[nums[i]].ri=i;
            }
        }
        int max=INT_MIN;
        int deg=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(a[nums[i]].freq>max){
                max=a[nums[i]].freq;
                deg=a[nums[i]].ri-a[nums[i]].li+1;
            }
            if(a[nums[i]].freq==max){
                if(deg>(a[nums[i]].ri-a[nums[i]].li+1)){
                    deg=a[nums[i]].ri-a[nums[i]].li+1;
                }
            }
        }
        return deg;
    }
        
};