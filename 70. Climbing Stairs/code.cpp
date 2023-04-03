class Solution {
public:
    int solve(int n,vector<int>& dp)
    {
        if(n<=1)
        return n;
        else
        {
            if(dp[n] != -1)
            {
                return dp[n];
            }
            else
            {
                dp[n]=solve(n-1,dp)+solve(n-2,dp);
                return dp[n];
            }
        }
    }
    int climbStairs(int n) {
        vector<int> dp(n+2,-1);
        int ans=solve(n+1,dp);
        return ans;
    }
};
