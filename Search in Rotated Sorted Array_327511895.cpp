class Solution {
public:
    // T T T T F F
    int findPivot(vector<int>& nums)
    {
        int l, r, mid;
        l = 0;
        r = nums.size() - 1;
        while( l <= r)
        {
            mid = l + (r - l)/2;
            if(mid < nums.size() - 1 and  nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            else if( nums[0] > nums[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return mid;
    }
    int binsearch(int l, int r, vector<int>& nums, int key)
    {
        int mid;
        while( l <= r)
        {
            mid = l + (r - l)/2;
            if( nums[mid] == key)
            {
                return mid;
            }
            else if( nums[mid] > key)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l, r;
        l = 0;
        r = nums.size() - 1;
        if( r == -1)
        {
            return -1;
        }
        int pivot = findPivot(nums);
        // cout<<pivot<<endl;
        if( nums[l] <= target)
        {
            return binsearch(l, pivot, nums, target);
        }
        else
        {
            // cout<<"here\n";
            return binsearch(pivot + 1, r, nums, target);
        }
    }
};
