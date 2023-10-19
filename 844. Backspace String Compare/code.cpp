class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,s2;
        int i=0,j=0;
        while(i<s.size())
        {
            if(s[i] != '#')
            s1.push_back(s[i]);
            else
            if(s1.size() >= 1)
            {
                s1.pop_back();
            }
            

            i++;
        }
        while(j<t.size())
        {
            if(t[j] != '#')
            s2.push_back(t[j]);
            else
            if(s2.size() >= 1)
            s2.pop_back();

            j++;
        }
        return s1 == s2;
    }
};
