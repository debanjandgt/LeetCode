class Solution {
public:
    int solve(vector<vector<int>>& dp,int index,vector<int>& nums,int target)
    {
        if(target == 0)
        return 0;
        if(index == 0)
        {
            if(target == 0)
            return 0;
            if(target-nums[index] == 0)
            return 1;
            else
            return -1e7;
        }
        if(dp[target][index] != -1)
        return dp[target][index];
        int notTake=0+solve(dp,index-1,nums,target);
        int take=-1e7;
        if(target >= nums[index])
        {
            take=1+solve(dp,index-1,nums,target-nums[index]);
        }
        return dp[target][index]=max(take,notTake);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>> dp(target+1,vector<int>(nums.size()+1,-1));
        int index=nums.size()-1;
        long long ans = solve(dp,index,nums,target);
        return ans<0? -1:ans;
    }
};
