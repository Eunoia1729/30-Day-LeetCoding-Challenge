class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int maxx, k, i, j, n = nums.size();
        vector<int> res;
        vector<pair<pair<int, int>,int> > v;
        for(i = 0; i < n; ++i)
        {
            for(j = 0; j < nums[i].size(); ++j)
            {
                v.push_back({{i + j, j}, nums[i][j]});  
            }
        }
        sort(v.begin(), v.end());
        for(auto p: v)
        {
            res.push_back(p.second);
        }
        return res;
    }
};
