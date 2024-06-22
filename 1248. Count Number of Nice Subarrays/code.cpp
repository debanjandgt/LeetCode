class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int goal) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2 == 0)
            nums[i]=0;
            else
            nums[i]=1;
        }
        map<int,int> mp;
        int cnt=0;
        int prefSum=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            prefSum+=nums[i];
            if(mp.find(prefSum-goal) != mp.end())
            cnt+=mp[prefSum-goal];

            mp[prefSum]++;
        }
        return cnt;
    }
};
