class Solution {
public:
     int f(vector<int> piles, int k)
    {
        int h1 = 0;
        
        for(auto c : piles)
            h1 += (c / k) + ((c % k) ? 1 : 0);
        
        return h1;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n = piles.size();
        
        int low = 1, high = *max_element(piles.begin(), piles.end()), mid;
        
        while(low < high)
        {
            mid = low + (high - low)/2;
            
            if(f(piles, mid) <= h)
                high = mid;
            else
                low = mid+1;
        }
        
        return low;
    }
};