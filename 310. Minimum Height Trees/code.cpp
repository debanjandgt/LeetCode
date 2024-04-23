class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> res;
        if (n <= 0) return res;
        if (n == 1) {
            res.push_back(0);
            return res;
        }
        vector<int> degree(n, 0);
        vector<vector<int>> adj(n);
        for (const auto& e : edges) {
            degree[e[0]]++;
            degree[e[1]]++;
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (degree[i] == 1) {
                q.push(i);
            }
        }
        while (n > 2) {
            int size = q.size();
            n -= size;
            while (size-- > 0) {
                int v = q.front();
                q.pop();
                for (int i : adj[v]) {
                    degree[i]--;
                    if (degree[i] == 1) {
                        q.push(i);
                    }
                }
            }
        }
        while (!q.empty()) {
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};
