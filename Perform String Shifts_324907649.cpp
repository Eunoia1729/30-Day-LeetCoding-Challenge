class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int cnt = 0;
        for(auto p: shift)
        {
            if(p[0] == 0)
                cnt -= p[1];
            else
                cnt += p[1];
            cnt += s.size();
            cnt %= s.size();
        
        }
        string s1, s2;
        s1 = s.substr(s.size() - 1 - cnt + 1,cnt);
        s2 = s.substr(0, s.size() - cnt);
        return s1 + s2;
    }
};
