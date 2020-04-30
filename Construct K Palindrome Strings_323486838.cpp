class Solution {
public:
    bool canConstruct(string s, int k) {
        long long ans, i;
        map<int,int> mp;
        for(i = 0; i < s.size(); ++i)
        {
            mp[s[i]-'a']++;
        }
        ans = 0;
        for(auto p: mp)
        {
            if( p.second%2)
                ans++;
        }
        if( ans <= k and s.size() >= k)
            return true;
        return false;
    }
};
