class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        deque<int> temp1(nums.begin(),nums.end());
        deque<int> dq(nums.begin(),nums.end());
        sort(temp1.begin(),temp1.end());
        if(temp1 == dq)
            return 0;
        int cnt=0;
        while(true)
        {
            for(int i=0;i<dq.size();i++)
            {
                int val=dq.back();
                dq.pop_back();
                dq.push_front(val);
                cnt++;
                if(dq == temp1)
               return cnt;
            }
            break;
            
        }
        return -1;
    }
};
