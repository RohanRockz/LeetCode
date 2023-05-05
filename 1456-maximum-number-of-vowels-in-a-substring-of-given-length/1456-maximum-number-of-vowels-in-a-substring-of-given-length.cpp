class Solution {
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
public:
    int maxVowels(string s, int k) 
    {
        int c = 0;
        int mx = 0;
        
        for(int i = 0; i < k; i++)
        {
            if(isVowel(s[i]))
                c++;
        }
        
        mx = c;
        
        if(mx == k)
            return mx;
        
        for(int i = k; i < s.size(); i++)
        {            
            if(isVowel(s[i - k]))
                c--;
            
            if(isVowel(s[i]))
                c++;
            
            if(c > mx)
                mx = c;
            
            if(mx == k)
                return mx;
        }
        
        return mx;
    }
};