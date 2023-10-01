class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int cnt=0;
        for(auto it:mp)
        {
            int prev=-1;
            int k=it.first;
            int v=it.second;
            int rem=v%3;
            int d=v/3;
            if(rem == 0)
            {
                cnt += d;
                mp.erase(k);
                continue;
            }
            else if(rem == 1 && d >= 1)
            {
                cnt += d-1;
                v-= ((d-1)*3);
            }
            else if(rem == 2)
            {
                cnt+= d;
                v-= (d*3);
            }
            if(v!= 0 && v %2 == 0)
            {
                cnt+= (v/2);
                v/=2;
                mp.erase(k);
            }
        }
        if(mp.size() > 0)
            return -1;
        else
            return cnt;
    }
};
