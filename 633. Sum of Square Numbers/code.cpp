class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c <= 1)return true;
        unordered_map<long long,long long> mp;
        mp[0]=1;
        long long i=1;
        while(i<=c)
        {
            long long value=i*i;
            if(value > c)return false;
            if(value+value == c) return true;
            if(mp.find(c-value) != mp.end())
            return true;
            else
            mp[value]=1;
            i++;
        }
        return false;
    }
};
