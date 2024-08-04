class Solution {
public:
    int mod=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> vec;
        for(int i=0;i<nums.size();i++)
        {
            long long sum=nums[i]%mod;
            vec.push_back(sum);
            for(int j=i+1;j<nums.size();j++)
            {
                sum=(sum%mod+nums[j]%mod)%mod;
                vec.push_back(sum%mod);
            }
        }
        sort(vec.begin(),vec.end());
        left-=1;
        right-=1;
        long long ans=0;
        for(int i=left;i<=right;i++)
        {
            ans=(ans%mod+vec[i]%mod)%mod;
        }
        return ans%mod;
    }
};
