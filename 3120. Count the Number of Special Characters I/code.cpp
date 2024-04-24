class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int> mp;
        int cnt=0;
        set<char> st;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            int d=(int)ch;
            if(d>=65 && d<=90)
            {
                d+=32;
                char c=(char)d;
                if(mp.find(c) != mp.end() && st.find(c) == st.end())
                   { cnt++;
                   st.insert(c);
                   }
            }
           
            mp[ch]++;
        }
        return cnt;
    }
};
