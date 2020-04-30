class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        map<string, int> mp;
        int i, j;
        for(auto p: words)
        {
            for(i = 1; i < p.size(); ++i)
            {
                for(j = 0; j < p.size(); ++j)
                {
                    if( j + i <= p.size() )
                    {
                        mp[p.substr(j, i)]+=1;
                    }
                }
            }
        }
        // for(auto p: mp)
        //     cout<<p.first<<" ";
        // cout<<endl;
        vector<string> res;
        for(auto p: words)
        {
            if( mp[p])
                res.push_back(p);
        }
        return res;
    }
};
