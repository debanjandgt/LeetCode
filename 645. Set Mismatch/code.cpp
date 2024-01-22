class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int i=1;
        int k=0;
        int Twice,Missing;
        while(true)
        {
            if(mp.find(i) == mp.end())
            {
                Missing=i;
                k++;
            }
            else if(mp[i] == 2)
            {
                Twice=i;
                k++;
            }
            i++;
            if(k == 2)
            break;
        }
        return {Twice,Missing};
    }
};
