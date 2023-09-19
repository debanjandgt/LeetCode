class Solution {
public:
    static bool cmp(pair<int, int> p1, pair<int, int> p2) {
        if (p1.first < p2.first)
            return true;
        if (p1.first == p2.first) {
            if (p1.second < p2.second)
                return true;
        }
        return false;
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int, int> m;
        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < mat[0].size(); j++) {  
                if (mat[i][j] == 1)
                    cnt++;
            }
            m.insert({cnt, i}); 
        }
        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), cmp);
        vector<int> ans;
        for (auto it : vec) {
            if (k) {
                int key = it.second;
                ans.push_back(key);
                k--;
            }
        }
        return ans;
    }
};
