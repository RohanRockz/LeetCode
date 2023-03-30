class Solution {
public:
    bool isScramble(string s1, string s2) {
         if(s1.size() != s2.size())
            return false;
        
        int l = s1.size();
        vector<vector<vector<int>>> a (l, vector<vector<int>> (l, vector<int> (l + 1)));
        
        for(int k = 1; k<=l; k++)
        {
            for(int i = 0; i + k <= l; i++)
            {
                for(int j = 0; j + k <= l; j++)
                {
                    if(k == 1)
                        a[i][j][k] = s1[i] == s2 [j];
                    else
                    {
                        for(int q = 1; q < k && !a[i][j][k]; q++)
                            a[i][j][k] = (a[i][j][q] && a[i+q][j+q][k-q]) || (a[i][j+k-q][q] && a[i+q][j][k-q]);
                    }
                }
            }
        }
        
        return a[0][0][l];
    }
};