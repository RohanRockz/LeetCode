class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        
        if(n<=2)
            return n;
        
        unordered_map<int, int> a;
        
        int i, j;
        
        for(i=0, j=0; j<n; j++)
        {
            a[fruits[j]]++;
            
            if(a.size()>2)
            {
                if(--a[fruits[i]] == 0)
                    a.erase(fruits[i]);
                i++;
            }
        }
        
        return j-i;
    }
};