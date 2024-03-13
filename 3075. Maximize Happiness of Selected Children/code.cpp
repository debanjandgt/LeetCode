class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int> pq;
        long long penalty=0,ans=0;
        for(auto i:happiness)
        {
            pq.push(i);
        }
        while(k>0 && !pq.empty())
        {
            int val=pq.top();
            pq.pop();
            val-=penalty;
            penalty++;
            k--;
            if(val >= 0)
            ans+=val;
            else
            return ans;
        }
        return ans;
    }
};
