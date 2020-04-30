class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long i, ans = 1, n = nums.size();
        vector<int> res(n, 1);
        for(i = 0; i < n; ++i)
        {
            res[i] *= ans;
            ans*=nums[i];
        }
        ans = 1;
        for(i = n - 1; i >= 0; --i)
        {
            res[i] *= ans;
            ans*=nums[i];
        }
        return res;
    }
};
