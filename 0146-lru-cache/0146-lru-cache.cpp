class LRUCache {
    struct mycomp
    {
        constexpr bool operator()(pair<int, int> const &a, pair<int, int> const &b) const noexcept
        {
            return a.second < b.second;
        }
    };
    
public:
    set<pair<int, int>, mycomp> pq;
    int n;
    vector<int> p, q;
    int val;
    
    LRUCache(int capacity) 
    {
        n = capacity;
        p = vector<int> (10001, -1);
        q = vector<int> (10001, 0);
        val = 0;
    }
    
    int get(int key) 
    {
        if(p[key] == -1)
            return -1;

        pq.erase({key, q[key]});
        q[key] = val;
        pq.insert({key, val++});
        return p[key];
    }
    
    void put(int key, int value) 
    {
        if(pq.size() < n)
        {
            if(p[key] == -1)
                q[key] = val, pq.insert({key, val++});
            else
            {
                pq.erase({key, q[key]});
                q[key] = val;
                pq.insert({key, val++});
            }
            p[key] = value;
        }
        else
        {
            if(p[key] == -1)
            {
                p[(pq.begin())->first] = -1;
                pq.erase(pq.begin());
                q[key] = val;
                pq.insert({key, val++});
            }
            else
            {
                pq.erase({key, q[key]});
                q[key] = val;
                pq.insert({key, val++});
            }
            p[key] = value;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */