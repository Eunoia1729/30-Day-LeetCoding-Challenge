class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        long long i, j, ans;
        vector<int> v;
        for(auto p: satisfaction)
            v.push_back(p);
        sort(v.begin(), v.end());
        long long dp[v.size() + 1][v.size() + 1];
        memset(dp,0,sizeof(dp));
        for(i = 0; i < v.size(); ++i)
        {
            for(j = 0; j <= i; ++j)
            {
                dp[i + 1][j+1] = (j+1)*v[i] + dp[i][j];  
            }
        }
        ans = 0;
        for(j = 0; j <= v.size(); ++j)
        {
            ans = max(ans, dp[v.size()][j]);
        }
        return ans;
    }
};
