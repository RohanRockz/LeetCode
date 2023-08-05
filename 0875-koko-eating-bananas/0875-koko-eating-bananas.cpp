class Solution {
public:
     double f(vector<int> piles, int k)
    {
        double total=0;
         int n=piles.size();
         for(int i=0;i<n;i++){
             total+=ceil((double)piles[i]/(double)k);
         }
         return total;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n = piles.size();
        
        int low = 1, high = *max_element(piles.begin(), piles.end());
        
        while(low <=high)
        {
             int mid = (low + high)/2;
            
            if(f(piles, mid) <= h)
                high = mid-1;
            else
                low = mid+1;
        }
        
        return low;
    }
};