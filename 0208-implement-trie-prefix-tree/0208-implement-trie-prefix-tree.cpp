class Trie {
private:
    unordered_set<string> mp;
public:
    Trie() 
    {
        
    }
    
    void insert(string word) 
    {
        mp.insert(word);
    }
    
    bool search(string word) 
    {
        return (mp.find(word) != mp.end());
    }
    
    bool startsWith(string prefix) 
    {
        
        int k = prefix.size();
        for(auto c:mp)
        {
            if(c.substr(0,k) == prefix)
                return true;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
