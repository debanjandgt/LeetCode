class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        priority_queue<int> pq;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            pq.push(it.second);
        }
        
        int ans=0;
        while(!pq.empty())
        {
            int a=pq.top();
            pq.pop();
            if(pq.empty())
            {
                ans=a;
                break;
            }
            int b=pq.top();
            pq.pop();
            a--;
            b--;
            if(a)
            pq.push(a);
            if(b)
            pq.push(b);
        }
        return ans;
    }
};
