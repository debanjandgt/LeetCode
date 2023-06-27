class Solution {
public:
int solve(vector<vector<int>>& matrix,vector<vector<int>>& dp,int i,int j)
{
     if(i<0 || j<0 || j >= matrix[0].size())
    return 1e9;
    if(i==0)
    return matrix[i][j];
   
    if(dp[i][j] != INT_MAX)
    return dp[i][j];
    int up=matrix[i][j]+solve(matrix,dp,i-1,j);
    int ul=matrix[i][j]+solve(matrix,dp,i-1,j-1);
    int ur=matrix[i][j]+solve(matrix,dp,i-1,j+1);
    dp[i][j]=min(up,min(ul,ur));
    return dp[i][j];
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int mini=INT_MAX;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            int ans=solve(matrix,dp,m-1,i);
            mini=min(mini,ans);
        }
        return mini;
    }
};
