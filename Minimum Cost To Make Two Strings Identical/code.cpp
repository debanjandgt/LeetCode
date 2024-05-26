class Solution {

  public:
    int findMinCost(string x, string y, int costX, int costY) {
       int n = x.size();
        int m = y.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (int i = n - 1; i >= 0; i--) {
            dp[i][m] = costX * (n - i);
        }

        for (int j = m - 1; j >= 0; j--) {
            dp[n][j] = costY * (m - j);
        }
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                if (x[i] == y[j]) {
                    dp[i][j] = dp[i + 1][j + 1];
                } else {
                    dp[i][j] = min(costX + dp[i + 1][j], costY + dp[i][j + 1]);
                }
            }
        }
        return dp[0][0];
    }
};
