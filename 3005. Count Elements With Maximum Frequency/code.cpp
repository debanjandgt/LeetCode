class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m;
        int maxi=-1;
        for(auto i:nums)
        {
            m[i]++;
            maxi=max(maxi,m[i]);
        }
        long long ans=0;
        for(auto i:m)
        {
            if(i.second == maxi)
                ans+=i.second;
        }
        return ans;
    }
};
