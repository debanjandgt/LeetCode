class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
                int v=-1;
                for(int k=2;k<nums[i][i];k++)
                {

                    if(nums[i][i]%k == 0)
                    {
                        v=0;
                       
                    }
                }
                if(v==-1)
                maxi=max(maxi,nums[i][i]);
            }
            for(int i=nums.size()-1;i>=0;i--)
        {
                int v=-1;
                for(int k=2;k<nums[i][i];k++)
                {

                    if(nums[i][i]%k == 0)
                    {
                        v=0;
                       
                    }
                }
                if(v==-1)
                maxi=max(maxi,nums[i][i]);
            }
        return maxi;
    }
};
