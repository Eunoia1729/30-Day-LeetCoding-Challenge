class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        string x;
        for(auto p: strs)
        {
            x = p;
            sort(x.begin(), x.end());
            mp[x].push_back(p);
        }
        vector<vector<string>> ans;
        for(auto p: mp)
        {
            ans.push_back(p.second);
        }
        return ans;
    }
};
