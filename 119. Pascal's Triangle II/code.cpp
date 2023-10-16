class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int numRows=rowIndex+1;
              int s=1;
        vector<vector<int>> dp;
        for(int i=0;i<numRows;i++)
        {
            vector<int> vec(i+1,1);
            for(int j=1;j<i;j++)
            {
                vec[j]=dp[i-1][j]+dp[i-1][j-1];
            }
            dp.push_back(vec);
        }
        return dp[rowIndex];
    }
};
