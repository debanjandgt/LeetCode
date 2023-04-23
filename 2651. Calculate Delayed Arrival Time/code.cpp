class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int val=arrivalTime+delayedTime;
        return val%24;
    }
};
