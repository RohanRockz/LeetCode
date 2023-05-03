class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        int m[2001] = {0};
        
        for(int i : nums1)
            m[i + 1000] = 1;
        
        vector<vector<int>> a(2);
        
        for(int i : nums2)
        {
            if(!m[i + 1000])
                m[i + 1000] = -1, a[1].push_back(i);
            else if(m[i + 1000] == 1)
                m[i + 1000] *= -1;
        }
        
        for(int i = 0; i < 2001; i++)
        {
            if(m[i] == 1)
                a[0].push_back(i - 1000);
        }
        
        return a;
    }
};