class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int sum=0;
        while(k)
        {
            k--;
            int v=pq.top();
            sum+=pq.top();
            pq.pop();
            pq.push(v+1);
            
        }
        return sum;
    }
};
