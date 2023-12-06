class Solution {
public:
    int totalMoney(int n) {
        unordered_map<int,int> mp;
        int sum=0;
        int dollars=1;
        for(int i=0;i<7;i++)
        {
            mp[i]=dollars;
            dollars++;
        }
        for(int i=0;i<n;i++)
        {
            int rem=i%7;
            int v=mp[rem];
            sum+=v;
            mp[rem]++;
        }
        return sum;
    }
};
