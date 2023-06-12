class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> z;
        if(nums.size()==0)
            return vector<string>();
        int a=nums[0],b=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]+1==nums[i])
                b=nums[i];
            else
            {
                if(a==b)
                    z.push_back(to_string(a));
                else
                    z.push_back(to_string(a)+"->"+to_string(b));
                a=b=nums[i];
            }
        }
        if(a==b)
            z.push_back(to_string(a));
        else
            z.push_back(to_string(a)+"->"+to_string(b));
        return z;
    }
};