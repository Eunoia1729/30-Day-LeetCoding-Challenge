class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string ss1, ss2;
        for(int i = 0 ;i < S.length(); ++i)
        {
            if( S[i] == '#')
            {
                if(ss1.length() > 0)
                    ss1.pop_back();
            }
            else
            {
                ss1.push_back(S[i]);
            }
        }
        for(int i = 0 ;i < T.length(); ++i)
        {
            if( T[i] == '#')
            {
                if(ss2.length() > 0)
                    ss2.pop_back();
            }
            else
            {
                ss2.push_back(T[i]);
            }
        }
        return ( ss1 == ss2);
    }
};
