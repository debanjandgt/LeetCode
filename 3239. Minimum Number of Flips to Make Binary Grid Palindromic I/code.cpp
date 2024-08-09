class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dummyGrid(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dummyGrid[i][j]=grid[i][j];
            }
        }
        int c1=0,c2=0;
        int rows=0;
        while(rows<n)
        {
            int l=0,r=m-1;
            while(l<r)
            {
                if(grid[rows][l] != grid[rows][r])
                    c1++;
                
                l++;
                r--;
            }
            rows++;
        }
        int col=0;
        while(col < m)
        {
            int l=0,r=n-1;
            while(l<r)
            {
                if(grid[l][col] != grid[r][col])
                    c2++;
                
                l++;
                r--;
            }
            col++;
        }
        return min(c1,c2);
    }
};
