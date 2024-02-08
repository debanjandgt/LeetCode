class Solution {
public:
    long long solve(int n, int index, vector<vector<long long>>& dp, vector<long long>& sq) {
        if (n < 0)
            return 1e9;

      if (index == 0) {
    if (n < 0)
        return 1e9;
    else
        return (n % sq[index] == 0) ? n / sq[index] : 1e9;
}

        if (dp[n][index] != -1)
            return dp[n][index];

        int notTake = solve(n, index - 1, dp, sq);
        int take = 1e9;

        if (n >= sq[index])
            take = 1 + solve((n - sq[index]), index, dp, sq);

        return dp[n][index] = min(notTake, take);
    }

    int numSquares(int n) {
        vector<long long> sq;
        for (int i = 1; i * i <= n; i++) {
            sq.push_back(i * i);
        }
        vector<vector<long long>> dp(n + 1, vector<long long>(sq.size() + 1, -1));

        return solve(n, sq.size() - 1, dp, sq);
    }
};
