class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> mp;
        string ans;
        for(auto a:paths)
        {
            string a1=a[0];
            string a2=a[1];
            mp[a1]=a2;
        }
        string initial=paths[0][0];
        while(true)
        {
             if(mp.find(initial) != mp.end())
             {
                 ans=mp[initial];
                 initial=ans;
             }
             else
             return ans;
        }
    }
};
