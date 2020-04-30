class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        int i, j, cnt;
        for(i = 0; i < nums.size(); ++i)
        {
            cnt = 0;
            for(j = 0; j < nums.size(); ++j)
            {
                if( nums[j] < nums[i])
                    cnt++;
            }
            res.push_back(cnt);
        }
            return res;

    }
};
