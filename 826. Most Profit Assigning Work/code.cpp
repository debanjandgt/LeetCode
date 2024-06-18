class Solution {
public:
    static bool cmp(pair<long long,long long>& p1,pair<long long,long long>& p2) {
        return p1.first < p2.first;
    }
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<long long, long long>> vec;
        for(int i = 0; i < profit.size(); i++) {
            vec.push_back({difficulty[i], profit[i]});
        }
        sort(vec.begin(), vec.end(),cmp);
        for (int i = 1; i < vec.size(); ++i) {
            vec[i].second = max(vec[i].second, vec[i - 1].second);
        }
        long long ans = 0;
        for (auto i : worker) {
            auto it = lower_bound(vec.begin(), vec.end(), make_pair((long long)i, LLONG_MAX)) - 1;
            if (it >= vec.begin() && it->first <= i) {
                ans += it->second;
            }
        }
        return ans;
    }
};
