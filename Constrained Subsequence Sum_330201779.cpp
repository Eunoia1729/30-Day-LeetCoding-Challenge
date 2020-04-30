class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int tmp, i, n = nums.size();
        multiset<int> ms;
        ms.insert(0);
        for(i = 0; i < n; ++i)
        {
            nums[i] = *(ms.rbegin()) + nums[i];
            ms.insert(nums[i]);
            if( i - k >= 0)
            {
                ms.erase(nums[i-k]);
            }
        }
        int ans = INT_MIN;
        for(i = 0; i < n; ++i)
        {
            ans = max(ans, nums[i]);
        }
        return ans;
    }
};
