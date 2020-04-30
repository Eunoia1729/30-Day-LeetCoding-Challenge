class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(auto p: nums)
        {
            ans^=p;
        }
        return ans;
    }
};
