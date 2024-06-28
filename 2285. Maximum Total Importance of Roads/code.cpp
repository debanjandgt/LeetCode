class Solution {
public:
   static bool cmp(pair<int,int>& p1, pair<int,int>& p2) {
        if (p1.second < p2.second)
            return true;
        else if (p1.second == p2.second)
            return p1.first < p2.first;
        return false;
    }
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<list<int>> adjList(n);
        vector<int> degrees(n, 0);
        
        for (auto& i : roads) {
            int u = i[0];
            int v = i[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
            degrees[u]++;
            degrees[v]++;
        }

        vector<pair<int, int>> nodes;
        for (int i = 0; i < n; ++i) {
            nodes.push_back({i, degrees[i]});
        }

        sort(nodes.begin(), nodes.end(), cmp);

        unordered_map<int, int> mp;
        int t = 1;
        for (auto& i : nodes) {
            int node = i.first;
            mp[node] = t;
            t++;
        }

        long long sum = 0;
        for (auto& i : roads) {
            int u = i[0];
            int v = i[1];
            sum += mp[u] + mp[v];
        }

        return sum;
    }
};
