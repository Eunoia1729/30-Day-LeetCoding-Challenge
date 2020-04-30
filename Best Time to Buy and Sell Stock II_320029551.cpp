class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, j, n = prices.size();
        int dp[n+1][2];
        for(i = 0 ; i <= n; ++i)
        {
            for(j = 0; j < 2; ++j)
            {
                dp[i][j] = INT_MIN;
            }
        }
        dp[0][0] = 0;
        for(i = 1; i <= n; ++i)
        {
            dp[i][0] = max( dp[i-1][0], dp[i-1][1] + prices[i-1] );
            dp[i][1] = max( dp[i-1][1], dp[i][0] - prices[i-1] );
        }
        return dp[n][0];
    }
};
