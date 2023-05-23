class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        unordered_set<int> s;
        
        int v=1;
        int i=0;
        while(1)
        {

            v=(v+(i*k))%n;
                        i++;
            if(v==0)
            v=n;
            if(s.find(v) == s.end())
            s.insert(v);
            else
            break;
        }
        vector<int> ans;
        for(int i=1;i<=n;i++)
        {
            if(s.find(i) == s.end())
            ans.push_back(i);
        }
        return ans;
    }
};
