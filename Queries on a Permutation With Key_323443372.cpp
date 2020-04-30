class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> res, v;
        long long i, temp = 0;
        for(i = 1;i <= m; ++i)
            v.push_back(i);
        for(auto p: queries)
        {
            for(i = 0; i < m; ++i)
            {
                if( v[i] == p)
                {
                    res.push_back(i);
                }
            }
            for(i = res.back(); i > 0 ; --i)
            {
                v[i] = v[i-1];
            }
            v[0] = p;
        }
        return res;
    }
};
