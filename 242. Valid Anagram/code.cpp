class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:t)
        {
            if(mp[i] > 0)
            mp[i]--;

            else
            return false;
        }
        for(auto i:mp)
        if(i.second >= 1)
        return false;
        return true;
    }
};
