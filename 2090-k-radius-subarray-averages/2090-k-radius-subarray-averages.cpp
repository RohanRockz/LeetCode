class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> avg (n, -1);
        
        if(n <= 2*k)
            return avg;        
        
        long s = 0;
        int i = 0;
        
        for(i = 0; i < 2*k; i++)
            s += nums[i];
        
        for(i = 2*k; i < n; i++)
        {
            s += nums[i];
            avg[i-k] = s / (2*k+1);
            s -= nums[i - 2*k];
        }
        
        return avg;
    }
};