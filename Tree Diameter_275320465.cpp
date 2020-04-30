class Solution {
public:
    vector<int> e[10005];
    int high[10005][2];
    int dfs(int u,int par)
    {
        int val, ans = 0;
        for(auto p: e[u])
        {
            if( p == par)
                continue;
            val = dfs(p,u);
            if( val > high[u][0])
            {
                swap(val,high[u][0]);
            }
            if( val > high[u][1])
            {
                swap(val,high[u][1]);
            }
        }
        return high[u][0] + 1; 
    }
    int treeDiameter(vector<vector<int>>& edges) {
        int i, n = edges.size() + 1;
        // vector<int> e[n];
        for(auto p: edges)
        {
            e[p[0]].push_back(p[1]);
            e[p[1]].push_back(p[0]);
        }
        // int high[n][2];
        memset(high, 0, sizeof(high));
        dfs(0, 0);
        int ans = 0;
        for(i = 0; i < n; ++i)
        {
            ans = max(ans, high[i][0] + high[i][1]);
        }
        return ans;
    }
};
