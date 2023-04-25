class SmallestInfiniteSet {
private:
    set<int> a;
    int i;
public:
    SmallestInfiniteSet() 
    {
        i = 1;
        a = set<int> ();
    }
    
    int popSmallest() 
    {
        if(a.size() == 0 || i < *a.begin())
            return i++;
        else
        {
            int d = *a.begin();
            a.erase(a.begin());
            if(i == d)
                i++;
            return d;
        }
    }
    
    void addBack(int num) 
    {
        a.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */