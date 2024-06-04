class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int answers=0,isODD=0;
        for(auto i:mp)
        {
            int fr=i.second;
            if(fr%2 == 0)
            answers+=fr;
            else
            {
                answers+=(fr-1);
                isODD=1;
            }
        }
        return isODD ? answers+1 : answers;
    }
};
