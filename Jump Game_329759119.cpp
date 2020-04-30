class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i, maxx = 0;
        for(i = 0; i <= min(maxx,(int) nums.size() - 1); ++i)
        {
            maxx = max(maxx, nums[i] + i);
        }
        if( i == nums.size())
            return true;
        return false;
    }
};
