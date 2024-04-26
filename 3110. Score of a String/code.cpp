class Solution {
public:
    int scoreOfString(string s) {
        int sc=0;
        for(int i=0;i<s.size()-1;i++)
        {
            char c1=s[i];
            char c2=s[i+1];
            int ab=abs((int)c1 -(int)c2);
            sc+=ab;
        }
        return sc;
    }
};
