class Solution {
public:
    int mod=1e9+7;
    int valueAfterKSeconds(int n, int k) {
        vector<int> pref(n,1);
        while(k-- > 0)
        {
            for(int i=1;i<n;i++)
            {
                pref[i]=((pref[i]%mod) + (pref[i-1]%mod))%mod;
            }
        }
        return pref[n-1];
    }
};
