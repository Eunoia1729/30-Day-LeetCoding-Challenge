class Solution {
public:
    bool check( int x1, int y1, int x2, int y2, int r)
    {
        if( r*r >= (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))
            return true;
        return false;
    }
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        int i, flag = 0;
        for( i = x1; i <= x2; ++i)
        {
            if( check(i, y1, x_center, y_center, radius) )
                flag = 1;
            if( check(i, y2, x_center, y_center, radius) )
                flag = 1;
        }
        for( i = y1; i <= y2; ++i)
        {
            if( check(x1, i, x_center, y_center, radius) )
                flag = 1;
            if( check(x2, i, x_center, y_center, radius) )
                flag = 1;
        }
        if( x_center >= x1 and x_center <= x2 and y_center >= y1 and y_center <= y2 )
            flag = 1;
            
        return flag;
    }
};
