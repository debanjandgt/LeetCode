class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int c1=1,c2=1;
        int m1=0,m2=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                c1++;
                m1=max(m1,c1);
            }
            else
            c1=1;

        }

          for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                c2++;
                m2=max(m2,c2);
            }
            else
            c2=1;

        }
        if(m1  == 0 && m2 == 0)
        return 1;
        return max(m1,m2);
    }
};
