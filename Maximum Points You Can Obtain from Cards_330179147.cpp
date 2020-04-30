class Solution {
public:
    
    int maxScore(vector<int>& cardPoints, int k) {
        int i, n = cardPoints.size();
        vector<int> pre(n + 2, 0);
        vector<int> suf(n + 2,0);
        for(i = 0; i < n; ++i)
        {
            pre[i + 1] = pre[i] + cardPoints[i];
        }
        for(i = n; i >= 1; --i)
        {
            suf[i] = suf[i + 1] + cardPoints[i - 1];
        }
        int ans = 0;
        for(i = 0; i <= k; ++i)
        {
            // cout<<i<<" "<<n - (k - i)<<endl;
            ans = max(ans, pre[i] + suf[n - (k - i) + 1]);
        }
        return ans;
    }
};
