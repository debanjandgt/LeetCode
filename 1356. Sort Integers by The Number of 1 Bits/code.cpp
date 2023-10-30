class Solution {
public:
    static bool cmp(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.first < p2.first)
        return true;
        else if(p1.first  == p2.first)
        {
            if(p1.second < p2.second)
            return true;
        }
        return false;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> vec;
        for(int i=0;i<arr.size();i++)
        {
            int elem=arr[i];
            int c=__builtin_popcount(elem);
            vec.push_back({c,elem});
        }
        vector<int> ans;
        sort(vec.begin(),vec.end(),cmp);
        for(auto it:vec)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
