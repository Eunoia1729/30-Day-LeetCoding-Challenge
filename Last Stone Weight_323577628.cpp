class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> v;
        for(auto p: stones)
            v.push_back(p);
        while(true)
        {
            sort(v.begin(), v.end());
            reverse(v.begin(), v.end());
            while( v.size() != 0 and v.back() == 0)
                v.pop_back();
            if( v.size() == 0)
                return 0;
            if( v.size() == 1)
                return v[0];
            v[0]-=v[1];
            v[1] = 0;
        }
        return 0;
    }
};
