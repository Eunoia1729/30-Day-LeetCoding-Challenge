class Solution {
public:
    int findMax(vector<int> &cur)
    {
        int i, ans, k, x;
        stack<int> s;
        ans = 0;
        for(auto p: cur)
            cout<<p<<" ";
        cout<<endl;
        for(i = 0; i < cur.size(); ++i)
        {
            while( s.size() and cur[s.top()] > cur[i])
            {
                k = cur[s.top()];
                s.pop();
                if( s.size())
                    k = min(k, i - s.top() - 1);
                else
                    k = min(k, i);
                ans = max(ans, k*k);
            }
            s.push(i);
            
        }
        while( s.size())
        {
            k = cur[s.top()];
            s.pop();
            if( s.size())
                k = min(k, i - s.top() - 1);
            else
                k = min(k, i);
            ans = max(ans, k*k);
        }
        return ans;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if( n == 0)
            return 0;
        int m = matrix[0].size(), i, j, ans = 0;
        vector<int> cur(m, 0);
        for(i = 0; i < n; ++i)
        {
            cout<<i<<endl;
            for(j = 0; j < m; ++j)
            {
                if( matrix[i][j] == '0')
                    cur[j] = 0;
                else
                    cur[j] += 1;
            }
            ans = max(ans, findMax(cur));
        }
        return ans;
    }
};
