class Solution {
public:
    
    void dfs(int i, int j, int &n, int &m, vector<vector<char>>& grid)
    {
        if( i >= n or i < 0)
            return;
        if( j >= m or j < 0)
            return;
        if( grid[i][j] == '0')
            return;
        // cout<<i<<" "<<j<<endl;
        grid[i][j] = '0';
        dfs(i+1, j,n,m, grid);
        dfs(i-1, j,n,m, grid);
        dfs(i, j-1,n,m, grid);
        dfs(i, j+1,n,m, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int i, j, ans = 0;
        int m, n = grid.size(); 
        if( n > 0)
            m = grid[0].size();
        else 
            m = 0;
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            {
                if( grid[i][j] == '1')
                {
                    ans++;
                    dfs(i, j,n,m, grid);
                }
            }
        }
        return ans;
    }
};
