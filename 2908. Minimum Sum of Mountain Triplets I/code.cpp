class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int ans=1e9;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[j] > nums[i] && nums[j] > nums[k])
                    {
                        ans=min(ans,(nums[i]+nums[j]+nums[k]));
                    }
                }
            }
        }
        return ans == 1e9 ? -1 : ans;
    }
};
