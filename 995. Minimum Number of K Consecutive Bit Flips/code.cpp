class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans=0;
        int count=0;
        vector<int> flipped(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(i >= k)
            {
                count-=flipped[i-k];
            }
            if((nums[i] == 0 && count%2 == 0) || (nums[i] == 1 && count%2 == 1))
            {
                if(i+k > nums.size()) return -1;
                ans++;
                count++;
                flipped[i]=1;
            }
        }
        return ans;
    }
};
