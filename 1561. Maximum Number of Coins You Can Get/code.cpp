class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
       int n=piles.size();
       int a1=n-1;
       int a2=a1-1;
       int a3=0;
       int sum=0;
       while(a3<a2)
       {
           sum+=piles[a2];
           a1=a2-1;
           a2=a1-1;
           a3++;
       }
       return sum;
    }
};
