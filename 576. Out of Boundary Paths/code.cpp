class Solution {
public:
    int M=1e9+7;
    int solve(int i,int j,vector<vector<vector<int>>>& dp,int k,int m,int n)
    {
        if(i<0 || j <0 || i>=m || j >= n)
        {
            return 1;
            
        }
        if(k<=0)
        return 0;

        if(dp[i][j][k] != -1)
        return dp[i][j][k];

        int up=solve(i-1,j,dp,k-1,m,n);
        int down=solve(i+1,j,dp,k-1,m,n);
        int left=solve(i,j-1,dp,k-1,m,n);
        int right=solve(i,j+1,dp,k-1,m,n);
        return dp[i][j][k] = ((up+down)%M + (left+right)%M)%M;

    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp(m+1,vector<vector<int>>(n+1,vector<int>(maxMove+1,-1)));
        return solve(startRow,startColumn,dp,maxMove,m,n);
    }
};
