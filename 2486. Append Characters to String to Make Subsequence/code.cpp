class Solution {
public:
    int appendCharacters(string s, string t) {
     int i=0,j=0;
     while(i<s.size() && j<t.size())
     {
        char c1=s[i];
        char c2=t[j];
        if(c1 == c2)
        {
            i++;
            j++;
            continue;
        }
        else
        {
            while(i<s.size() && s[i] != c2)
            {
                i++;
            }
        }
     }
     return t.size()-j;   
    }
};
