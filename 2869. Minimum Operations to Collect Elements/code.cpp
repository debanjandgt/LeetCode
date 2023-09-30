class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        map<int,int> st;
        int cnt=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            int v=nums[i];
            st[v]++;
            cnt++;
            int t=1;
            for(int i=1;i<=k;i++)
            {
                if(st.find(i) == st.end())
                {
                    t=0;
                    break;
                } 
            }
            if(t == 1)
                return cnt;
           
        }
        return 0;
    }
};
