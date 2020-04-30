class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum, gsum, flag;
        csum = gsum = flag = 0;
        for(auto p: nums)
        {
            if( csum + p < 0)
            {
                csum = 0;
            }
            else
            {
                csum+=p;
                flag = 1;
            }
            gsum = max(csum, gsum);
        }
        if( flag == 0)
        {
            gsum = INT_MIN;
            for(auto p: nums)
            {
                gsum = max(p, gsum);
            }
        }
        return gsum;
    }
};
