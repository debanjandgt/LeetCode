class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxi=INT_MIN,cnt=0,maxi_val=INT_MAX;
        for(int i=0;i<divisors.size();i++)
        {
            cnt=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]%divisors[i] == 0)
                cnt++;
            }
            if(cnt>maxi)
            {
                maxi=cnt;
                maxi_val=divisors[i];
            }
            else if(cnt == maxi)
            {
                maxi_val=min(maxi_val,divisors[i]);
            }
        }
        return maxi_val;
    }
};
