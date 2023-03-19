class WordDictionary{
private:
    unordered_map<int, unordered_set<string>> mp;
    
    bool containsDot(string word)
    {
        for(char c:word)
            if(c=='.')
                return true;
        return false;
    }
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) 
    {
        mp[word.size()].insert(word);
    }
    
    bool search(string word) 
    {
        int n = word.size();
        if(mp.find(n) != mp.end())
        {
            if(!containsDot(word))
            {
                return (mp[n].find(word) != mp[n].end());
            }
            for(auto s:mp[n])
            {
                bool f = true;
                for(int i = 0; i<n; i++)
                {
                    if(word[i] == '.')
                        continue;
                    if(s[i] != word[i])
                    {
                        f = false;
                        break;
                    }
                }
                if(f)
                    return f;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */