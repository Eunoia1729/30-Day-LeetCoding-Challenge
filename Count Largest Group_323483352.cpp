class Solution {
public:
    int countLargestGroup(int n) {
     int i, res = 0, maxx = 0,sum, k;
     map<int,int> mp;
        for(i = 1; i <= n; ++i)
     {
         k = i;
         sum = 0;
         while(k > 0)
         {
             sum+=(k%10);
             k/=10;
         }
         mp[sum]++;
         maxx = max(mp[sum], maxx);
     }
     for(auto p: mp)
     {
         if( p.second == maxx)
             res++;
     }
     return res;
    }
};
