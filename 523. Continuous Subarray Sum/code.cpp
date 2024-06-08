class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      unordered_map<int,int> mp;
      int currSum=0;
      mp[0]=0;
      for(int i=0;i<nums.size();i++)
      {
        currSum=(currSum+nums[i])%k;
        if(mp.find(currSum) != mp.end())
        {
            if(i+1-mp[currSum] >= 2)
            return true;
        }
        else
        {
            mp[currSum]=i+1;
        }
      }
      return false;  
    }
};
