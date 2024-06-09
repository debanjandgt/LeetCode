class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        map<int,int> mp;
        mp[0]=1;
        int currSum=0;
        for(int i=0;i<nums.size();i++)
        {
             nums[i]=( nums[i]%k+k)%k;
            currSum=(currSum+nums[i])%k;
            if(mp.find(currSum) != mp.end())
            {
                count+=mp[currSum];
                mp[currSum]++;
            }
            else
            {
                mp[currSum]++;
            }
        }
        return count;
    }
};
