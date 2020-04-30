class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j , i = 0, n = nums.size();
        while(i < n and nums[i] != 0)
            i++;
        j = i + 1;
        while(j < n and nums[j] == 0)
            j++;
        // cout<<i<<" "<<j<<endl;
        while(j < n and i < j)
        {
            swap(nums[j], nums[i]);
            i++;
            j++;
            while(i < n and nums[i] != 0)
                i++;
            while(j < n and nums[j] == 0)
                j++;
        }
    }
};
