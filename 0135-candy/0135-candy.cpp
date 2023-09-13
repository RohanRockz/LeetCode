class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int n = ratings.size();
        int a[n];
        
        for(int i = 0; i < n; i++)
            a[i] = 1;
        
        for(int i = 1; i < n; i++)
        {
            if(ratings[i] > ratings[i-1] && a[i] <= a[i-1])
                a[i] = a[i-1] + 1;
        }
        
        int s = a[n-1];
        
        for(int i = n-2; i >= 0; i--)
        {
            if(ratings[i] > ratings[i+1] && a[i] <= a[i+1])
                a[i] = a[i+1] + 1;
            s += a[i];
        }
        
        return s;
    }
};