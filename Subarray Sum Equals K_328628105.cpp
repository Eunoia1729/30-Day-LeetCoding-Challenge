class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int i, ans = 0;
        for(i = 0; i < nums.size(); ++i)
        {
            
            if(i)
                nums[i] += nums[i-1];
            ans += mp[nums[i] - k];
            mp[nums[i]]++;
            
        }
        return ans;
    }
};
