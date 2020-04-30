class Solution {
public:
    string entityParser(string text) {
        int flag, i = 0, j;
        vector<string> v{"&quot;","&apos;", "&amp;", "&gt;", "&lt;", "&frasl;"};
        // vector<char> r{'"',"'","&",">","<","/" };
        vector<char> r{'"','\'','&','>','<','/' };
        string res = "";
        while( i < text.size())
        {
            flag = 0;
            for(j = 0; j < v.size(); ++j)
            {
                if( i + v[j].size() <= text.size() and text.substr(i,v[j].size()) == v[j])
                {
                    flag = 1;
                    res+=r[j]; 
                    i += (v[j].size());
                    break;
                }
            }
            if( flag == 0)
            {
                res+=text[i];
                i++;
            }
        }
        return res;
    }
};
