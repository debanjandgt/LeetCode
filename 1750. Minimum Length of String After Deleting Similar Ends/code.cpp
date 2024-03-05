class Solution {
public:
    int minimumLength(string s) {
        int i=0,r=s.size()-1;
        while(i<r && s[i] == s[r])
        {
            char ch=s[i];
            while(i<r && s[i] == ch)
            {
                i++;
            }
            while(i<=r && s[r] == ch)
            {
                r--;
            }
        }
        return r-i+1;
    }
};
