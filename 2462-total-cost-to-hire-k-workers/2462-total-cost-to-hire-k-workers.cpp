class Solution {
    struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.first == b.first ? a.second > b.second : a.first > b.first;
    }
};
    
public:
    long long totalCost(vector<int>& costs, int k, int candidates) 
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, myComp> pq;
        int n = costs.size();
        
        int i = -1, j = n;
        if(i + candidates < j - candidates)
        {
            int z = candidates;
            while(z--)
            {
                i++;
                j--;
                pq.push({costs[i], i});
                pq.push({costs[j], j});
            }
        }
        else
        {
            i = j;
            for(int z = 0; z < n; z++)
                pq.push({costs[z], z});
        }
        
        long long s = 0;
        
        while(i < j && k--)
        {
            pair<int, int> t = pq.top();
            pq.pop();
            s += t.first;
            
            if(t.second <= i)
            {
                i++;
                if(i < j)
                    pq.push({costs[i], i});
            }
            else if(t.second >= j)
            {
                j--;
                if(i < j)
                    pq.push({costs[j], j});
            }
        }
        
        while(k > 0)
            s += pq.top().first, pq.pop(), k--;
        
        return s;
    }
};