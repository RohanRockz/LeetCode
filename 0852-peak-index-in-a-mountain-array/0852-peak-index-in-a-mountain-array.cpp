class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int l = 0, r = arr.size() - 1, mid;
        
        while(l < r)
        {
            mid = (r + l)/2;
            
            if(arr[mid] < arr[mid + 1])
                l = mid + 1;
            if(arr[mid] > arr[mid + 1])
                r = mid;
        }
        return l;
    }
};