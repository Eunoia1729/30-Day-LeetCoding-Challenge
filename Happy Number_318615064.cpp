class Solution {
public:
    int calcSum(int k)
    {
        int x = k, ans = 0;
        while(x > 0)
        {
            ans+=((x%10)*(x%10));
            x/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        int k = n, flag = 0;
        map<int,int> mp;
        while( k != 1)
        {
            k = calcSum(k);
            if( mp[k])
            {
                flag = 1;
                break;
            }
            mp[k] = 1;
        }
        return (!flag);
    }
};
