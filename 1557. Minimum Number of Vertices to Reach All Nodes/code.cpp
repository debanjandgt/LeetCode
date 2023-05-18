class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> sources(n, true);
        for (const vector<int> &edge : edges) {
            sources[edge[1]] = false;
        }
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (sources[i]) {
                result.push_back(i);
            }
        }
        return result;
    }
};
