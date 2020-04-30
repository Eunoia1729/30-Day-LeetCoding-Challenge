/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int binarySearch(int row,BinaryMatrix &binaryMatrix, int n, int m)
    {
        int ans = m, l = 0, mid, r = m - 1;
        while(l <= r)
        {
            mid = l + (r-l)/2;
            if( binaryMatrix.get(row, mid) == 0)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;  
            }
        }
        return ans;
    }
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int i, j, n, m;
        n = binaryMatrix.dimensions()[0];
        m = binaryMatrix.dimensions()[1];
        int ans = m;
        for(i = 0; i < n; ++i)
        {
            ans = min(ans, binarySearch(i, binaryMatrix, n, m) );
        }
        if( ans == m)
            return -1;
        return ans;
    }
};
