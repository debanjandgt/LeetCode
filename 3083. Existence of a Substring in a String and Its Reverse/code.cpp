class Solution {
public:
    bool isSubstringPresent(string s) {
        string rev=s;
        int i=0;int  j=s.size()-1;
        while(i<j)
        {
            swap(rev[i++],rev[j--]);
        }
        for(int i=0;i<s.size()-1;i++)
        {
            string t;
             t.push_back(s[i]);
             t.push_back(s[i+1]);
            if(s.find(t) != string::npos && rev.find(t) != string::npos)
            return true;
        }
        return false;
    }
};
