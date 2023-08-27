class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        if(n == 1)
            return 1;
        long long sum=0;
        map<long long,long long> mp;
        long long num=1;
        long long prev=0,curr=0;
        while(n)
        {
            if(mp.find(target-num) == mp.end())
            {
                sum+=num;
                mp[num]=1;
                curr++;
            }
            num++;
            if(curr>prev)
            {
                prev=curr;
                n--;
            }
        }
        return sum;
    }
};
