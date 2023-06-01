class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        if(grid[0][0] || grid[n-1][n-1])
            return -1;
        
        int s = 0;
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        
        while(!q.empty())
        {
            s++;
            queue<pair<int, int>> q1;
            while(!q.empty())
            {
                auto c = q.front();
                q.pop();
                
                if(grid[c.first][c.second])
                    continue;
                
                grid[c.first][c.second] = 1;
                
                if(c.first == n-1 && c.second == n-1)
                    return s;
                
                for(int i = c.first-1; i <= c.first+1; i++)
                {
                    for(int j = c.second-1; j <= c.second+1; j++)
                        if(i != c.first || j!= c.second)
                        {
                            if (i >= 0 && j >= 0 && i < n && j < n && !grid[i][j])
                                q1.push({i, j});
            
                        }
                }
            }
            swap(q, q1);         
        }
        return -1;
    }
};