class Solution {
public:
    long long solve(int ind, int sum, vector<vector<long long>>& dp) {
        if (ind == 0 || sum == 0)
            return 1;
        if (ind == 1) {
            if (sum == 1) 
                return 1; 
            else
                return -1e9;
        }
        if (dp[ind][sum] != -1)
            return dp[ind][sum];

        long long notTake = 1 * solve(ind - 1, sum, dp);
        long long Take = -1e9;
        if (sum >= ind) {
            Take = ind * solve(ind, sum - ind, dp);
        }
        return dp[ind][sum] = max(Take, notTake);
    }

    int integerBreak(int n) {
        if(n ==2)
        return 1;
        if(n ==3)
        return 2;
        vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, -1));
        return static_cast<int>(solve(n, n, dp));
    }
};
