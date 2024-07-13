class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int availableTime=0;
        double totalWaitingTime=0;
        for(auto i:customers)
        {
            int arrival=i[0];
            int duration=i[1];
            availableTime=max(availableTime,arrival)+duration;
            totalWaitingTime+=availableTime-arrival;
        }
        return totalWaitingTime/customers.size();
    }
};
