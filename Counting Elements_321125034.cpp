class Solution {
public:
    int countElements(vector<int>& arr) {
        map<int,int> mp;
        for( auto p: arr)
        {
            mp[p]+=1;
        }
        int prev = -2, cnt = 0, ans = 0;
        for(auto p: mp)
        {
            if( prev + 1 == p.first)
            {
                ans+=cnt;
            }
            prev = p.first;
            cnt = p.second;
        }
        return ans;
    }
};
