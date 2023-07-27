class Solution {
public:
    int solve(vector<vector<int>>& dp,vector<int>& coins,int n,int amount)
    {
        if(n == 0)
        {
           if(amount % coins[n] == 0)
           return 1;
           else
           return 0;
        }
        if(dp[n][amount] != -1)
        return dp[n][amount];

        int notTake=solve(dp,coins,n-1,amount);
         int take = 0;

        if ( coins[n] <= amount) {
            take = solve(dp, coins, n, amount - coins[n]);
        }
        return dp[n][amount] = take + notTake;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        return solve(dp,coins,coins.size()-1,amount);
    }
};
