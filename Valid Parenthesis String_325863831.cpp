class Solution {
public:
    bool checkValidString(string s) {
        int i, j, k, n = s.size();
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for(i = 1; i <= s.size(); ++i)
        {
            for(j = 0; j <= s.size(); ++j)
            {
                if( s[i-1] == '(')
                {
                    if( j + 1 <= n)
                    {
                        dp[i][j + 1] += dp[i-1][j];
                    }
                }
                else if( s[i-1] == ')')
                {
                    if( j - 1 >= 0)
                    {
                        dp[i][j - 1] += dp[i-1][j];
                    }
                }
                else
                {
                    dp[i][j]+= dp[i-1][j];
                    if( j - 1 >= 0)
                    {
                        dp[i][j - 1] += dp[i-1][j];
                    }
                    if( j + 1 <= n)
                    {
                        dp[i][j + 1] += dp[i-1][j];
                    }
                }
            }
        }
        if( dp[n][0] >= 1)
            return true;
        return false;
    }
};
