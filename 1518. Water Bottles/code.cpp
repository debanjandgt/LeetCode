class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int cnt=0;
        while(numBottles >= numExchange)
        {
            numBottles-=numExchange;
            cnt++;
            numBottles++;
        }
        return ans+cnt;
    }
};
