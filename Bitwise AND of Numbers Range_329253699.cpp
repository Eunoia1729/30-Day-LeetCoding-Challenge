class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int i, cur = 0;
        for(i = 30; i >= 0; --i)
        {
            if( ((1<<i)&m) == ((1<<i)&n) )
                cur += ((1<<i)&m);   
            else
                break;
        }
        return cur;
    }
};
