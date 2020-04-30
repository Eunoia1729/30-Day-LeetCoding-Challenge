class Solution {
public:
    int numOfWays(int n) {
        long long i, j, k, l1, l2, mod = 1e9 + 7;
        long long dp[n+1][2];
        memset(dp,0,sizeof(dp));
        dp[0][0] = 6;
        dp[0][1] = 6;
        // 1 2 1 -> 2 1 2, 2 1 3, 3 1 2, 2 3 2, 3 1 3
        // 1 2 3 -> 2 1 2, 3 1 2, 2 3 1, 2 3 2
        for(i = 1; i < n; ++i)
        {
            dp[i][0] = (dp[i-1][0]*3 + dp[i-1][1]*2)%mod;
            dp[i][1] = (dp[i-1][0]*2 + dp[i-1][1]*2)%mod;
        }
        return (dp[n-1][0] + dp[n-1][1])%mod;
    }
};
