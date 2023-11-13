class Solution {
public:
    long long distributeCandies(long long n, long long limit) {
        long long ans = 0;
        for (int i = 0; i <= std::min(n, limit); ++i) {
            long long remaining = (n - i);
            if (remaining > 2 * limit)
                continue;

            long long maxi = min(limit, remaining);
            remaining =remaining- maxi ;
            long long val = maxi - remaining + 1;

            ans += std::max(0LL, val);
        }
        return ans;
    }
};
