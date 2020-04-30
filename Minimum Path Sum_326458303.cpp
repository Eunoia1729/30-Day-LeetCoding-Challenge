class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int i, j, n = grid.size(), m = grid[0].size();
        int dp[n+1][m+1];
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            {
                dp[i][j] = INT_MAX;
            }
        }
        dp[0][0] = grid[0][0];
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < m; ++j)
            {
                if( i > 0 )
                    dp[i][j] = min(dp[i-1][j] + grid[i][j], dp[i][j]);
                if( j > 0)
                    dp[i][j] = min(dp[i][j-1] + grid[i][j], dp[i][j]);
            }
        }
        return dp[n-1][m-1];
    }
};
