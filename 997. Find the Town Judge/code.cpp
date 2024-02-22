class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,vector<int>> mp;
        map<int,vector<int>> mp2;
        vector<int> freq(n+1,0);
        for(auto i:trust)
        {
            mp[i[1]].push_back(i[0]);
            freq[i[0]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i].size() == n-1 && freq[i] == 0)
            return i;
        }
        return -1;
    }
};
