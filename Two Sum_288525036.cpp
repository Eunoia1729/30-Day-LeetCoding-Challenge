class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        vector<int> ans(2); 
        unordered_map<int,int> mp;
        int i;
        for(i = 0; i < v.size(); ++i)
            mp[v[i]] = i + 1;
        for(i = 0; i < v.size(); ++i)
        {
            if( mp[target - v[i]] != 0 and mp[target - v[i]] != i + 1)
            {
                ans[0] = i;
                ans[1] = mp[target - v[i]] - 1;
                break;
            }
        }
        return ans;
            
    }
};
