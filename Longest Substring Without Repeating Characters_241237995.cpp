class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    map<char,int> m;
    int n = s.size(), i = 0, k, ans = 0, cur = 0;
    while( i < n)
    {
      if( m[s[i]] == 0)
      {
        m[s[i]] = i + 1;
        cur++;
        i+=1;
      }
      else
      { 
        k = m[s[i]];
        m.clear();
        ans = max(cur, ans);
        i = k; 
        cur = 0;
      }
    }
    ans = max(cur, ans);
    return ans;
    }
};
