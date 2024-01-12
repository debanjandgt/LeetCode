class Solution {
public:
    bool halvesAreAlike(string s) {
        int i=0,r=s.size()-1;
        int t1=0;
        int t2=0;
        while(i<r)
        {
            char c1=s[i];
            char c2=s[r];
            if(c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u' ||c1 == 'A' || c1 == 'E' || c1 == 'I' || c1 == 'O' || c1 == 'U' )
            t1++;
            if(c2 == 'a' || c2== 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u' ||c2 == 'A' || c2 == 'E' || c2 == 'I' || c2 == 'O' || c2 == 'U' )
            t2++;

            i++;
            r--;
        }
        return t1 == t2;
    }
};
