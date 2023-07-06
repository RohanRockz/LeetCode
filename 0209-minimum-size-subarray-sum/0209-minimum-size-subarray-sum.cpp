class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int l = 0, m = INT_MAX;
        
        int a = 0;
        int s = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++)
        {
            s += nums[i];
            l++;
            if(s >= target)
            {
                while(a < n && s - nums[a] >= target)
                    s -= nums[a], l--, a++;
                if(l < m)
                    m = l;
            }
        }
        
        if(m == INT_MAX)
            m = 0;
        return m;
    }
};