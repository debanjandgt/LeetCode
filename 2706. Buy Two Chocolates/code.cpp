class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        if(prices.size()<2)
        return money;
        int cp=money;
        sort(prices.begin(),prices.end());
        int sum=prices[0]+prices[1];
        if(sum > money)
        return money;
        return abs(sum-money);

    }
};
