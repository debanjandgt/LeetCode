class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v(nums.size(),1);
        int mod=1e9+7;
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            v[i]=(v[i-1]*2)%mod;
        }
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            if(nums[l]+nums[r] > target)
            r--;
            else
            {
                count=(count+v[r-l])%mod;
                l++;
            }
        }
        return count;
    }
};
