class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i, j, ans = 0;
        for(i = 0;i < nums.size(); ++i)
        {
            if( nums[i] == 0)
                nums[i] = -1;
            if(i)
            nums[i]+= nums[i-1];
        }
        unordered_map<int,int> mp;
        mp[0] = 1000 - 1;
        i = 0;
        for(auto p: nums)
        {
            if( mp[p])
            {
                j = mp[p] - 1000;
                ans = max(ans, i - j);
            }
            else
            {
                mp[p] = 1000 + i;
            }
            i++;
        }
        return ans;
    }
};
