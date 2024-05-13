    class Solution {
    public:
        int matrixScore(vector<vector<int>>& grid) {
            int m=grid.size();
            int n=grid[0].size();
            for(int i=0;i<m;i++)
            {
                if(grid[i][0] == 0)
                {
                    for(int j=0;j<n;j++)
                    {
                        grid[i][j] = !grid[i][j];
                    }
                }
            }
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(grid[i][j] == 0)
                    {
                        int ones=0,zeros=0;
                        for(int k=0;k<m;k++)
                        {
                            if(grid[k][j] == 1)
                            ones++;
                            else
                            zeros++;
                        }
                        if(zeros > ones)
                        {
                            for(int k=0;k<m;k++)
                        {
                            grid[k][j] = !grid[k][j];
                        
                        }
                        }
                    }
                }
            }
            long long val=0,maxi=0;
            for(int i=0;i<m;i++)
            {
                int t=0;
                for(int j=n-1;j>=0;j--)
                {
                    if(grid[i][j])
                    {
                        val+=pow(2,t);
                    }
                    t++;
                }
            }
            return val;
        }
    };
