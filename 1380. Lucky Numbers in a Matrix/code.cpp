class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> miniR(n,vector<int>(m,0));
        vector<vector<int>> maxiC(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            int t=0;
            int mini=matrix[i][t];
            for(int t=1;t<m;t++)
            {
                mini=min(mini,matrix[i][t]);
            }
            t=0;
            for(int t=0;t<m;t++)
            {
                miniR[i][t]=mini;
            }
        }
        for(int i=0;i<m;i++)
        {
            int t=0;
            int maxi=matrix[t][i];
            for(int t=1;t<n;t++)
            {
                maxi=max(maxi,matrix[t][i]);
            }
            t=0;
            for(int t=0;t<n;t++)
            {
               maxiC[t][i]=maxi;
            }
        }
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == miniR[i][j] && matrix[i][j] == maxiC[i][j])
                vec.push_back(matrix[i][j]);
            }
        }
        return vec;
    }
};
