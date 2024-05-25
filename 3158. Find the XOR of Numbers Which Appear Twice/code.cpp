class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int ans=0;
        vector<int> vec;
        for(auto i:mp)
        {
            if(mp[i.first] == 2)
                {
                ans=1;
                vec.push_back(i.first);
            }
        }
        if(vec.size() == 0)
            return 0;
        int xori=vec[0];
        for(int i=1;i<vec.size();i++)
        {
            xori=xori^vec[i];
        }
        return xori;
    }
};
