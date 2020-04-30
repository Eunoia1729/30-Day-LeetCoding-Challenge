class Solution {
public:
    string rankTeams(vector<string>& votes) {
        map<char, vector<int> > mp;
        int i;
        vector< pair<vector<int>, int> > v;
        for(auto p: votes[0])
        {
            mp[p].push_back({});
            for(i = 0; i < votes[0].size(); ++i)
            {
                mp[p].push_back(0);
            }
        }
        for(auto p: votes)
        {
            for(i = 0; i < p.size(); ++i)
            {
                mp[p[i]][i]++;
            }
        }
        for(auto p: mp)
        {
            // reverse(p.second.begin(), p.second.end() );
            v.push_back({p.second,-1*p.first});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        string res = "";
        for(auto p: v)
        {
            res+=(-1*p.second);
        }
        return res;
    }
};
