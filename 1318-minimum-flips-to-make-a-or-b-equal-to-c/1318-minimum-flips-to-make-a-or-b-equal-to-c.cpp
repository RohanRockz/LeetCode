class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        bitset<32> x (a);
        bitset<32> y (b);
        bitset<32> z (c);
        
        int s = 0;
        for(int i = 0; i < 32; i++)
        {
            if(!z[i])
                s += x[i] + y[i];
            else
                s += !(x[i] | y[i]);            
        }
        
        return s;
    }
};