class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int j=mat[0].size()-1;
        int s=0;
        for(int i=0;i<mat.size();i++)
        {
            s=s+mat[i][i];
            if(i!=j)
            s=s+mat[i][j];
            j--;
        }
        return s;
    }
};
