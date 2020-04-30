class Solution {
public:
    int maxScore(string s) {
        int i, tot0, tot1, c0, c1;
        tot0 = tot1 = c0 = c1 = 0;
        for(auto p: s)
        {
            if( p == '0')
                tot0++;
            else
                tot1++;
        }
        int ans = 0;
        for(i = 0; i< s.size() - 1; ++i)
        {
            if( s[i] == '0')
                c0++;
            else
                c1++;
            ans = max(ans, c0 + tot1 - c1);
        }
        return ans;
    }
};
