class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
        int  i, n = arr.size();
        vector<int> tmp(n), tmp1(n);
        for(i = 0; i < n; ++i)
        {
            tmp[i] = arr[i];    
        }
        do
        {
            for(i = 0; i < n; ++i)
            {
                tmp1[i] = tmp[i];    
            }
            for(i = 1; i < n - 1; ++i)
            {
                if( tmp1[i] < tmp1[i + 1] and tmp1[i] < tmp1[i - 1] )
                {
                    tmp[i]++;
                }
                else if( tmp1[i] > tmp1[i + 1] and tmp1[i] > tmp1[i - 1] )
                {
                    tmp[i]--;
                }
            }
            
        }
        while( tmp != tmp1);
        return tmp;
    }
};
