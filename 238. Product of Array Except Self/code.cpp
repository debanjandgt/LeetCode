class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size());
        vector<int> suff(nums.size());
        pref[0]=nums[0];
        suff[suff.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++)
        {
            pref[i]=pref[i-1]*nums[i];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            suff[i]=suff[i+1]*nums[i];
        }
        vector<int> fAns(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            if(i == 0)
            fAns[i]=suff[i+1];
            else if(i == nums.size()-1)
            fAns[i]=pref[i-1];
            else
            {
                fAns[i]=pref[i-1]*suff[i+1];
            }
        }
        return fAns;
    }
};
