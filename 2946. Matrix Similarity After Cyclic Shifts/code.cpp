class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> copy=mat;
        int k1=k,k2=k;
        while(k1)
        {
            for(int i=0;i<mat.size();i+=2)
            {
                deque<int> dq(mat[i].begin(),mat[i].end());
                int v=dq.front();
                dq.pop_front();
                dq.push_back(v);
                for(int j=0;j<mat[0].size();j++)
                {
                   mat[i][j]=dq[j];
                }
            }
            k1--;
        }
        while(k2)
        {
            for(int i=1;i<mat.size();i+=2)
            {
                deque<int> dq(mat[i].begin(),mat[i].end());
                int v=dq.back();
                dq.pop_back();
                dq.push_front(v);
                for(int j=0;j<mat[0].size();j++)
                {
                   mat[i][j]=dq[j];
                }
            }
            k2--;
        }
        return copy == mat;
    }
};
