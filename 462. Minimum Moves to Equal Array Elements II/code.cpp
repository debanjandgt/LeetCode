class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid;
        if(nums.size()%2 == 1)
        {
            int len=nums.size()/2;
            mid=nums[len];
        }
        else
        {
            int len1=nums.size()/2;
            int len2=len1-1;
            mid=nums[len2]+nums[len1];
            mid/=2;
        }

        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            cnt+=abs(nums[i]-mid);
        }
        return cnt;
    }
};
