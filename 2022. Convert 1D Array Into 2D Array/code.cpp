class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> vec(m,vector<int>(n));
        int i=0,j=0,pos=0;
        if(m*n != original.size())
        return {};
        while(i<m)
        {
            j=0;
            while(j<n)
            {
                vec[i][j]=original[pos];
                pos++;
                j++;
            }
            i++;
        }
        return vec;
    }
};
