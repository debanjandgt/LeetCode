class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
       vector<int> pre(nums.size());
       vector<int> suff(nums.size());
       pre[0]=nums[0];
       suff[nums.size()-1]=nums[nums.size()-1];
       //Let's Make The PRE
       for(int i=1;i<nums.size();i++)
       {
           pre[i]=max(pre[i-1],nums[i]);
       } 
       //Let's Make The Suf
       suff[nums.size()-1]=nums[nums.size()-1];
       for(int i=nums.size()-2;i>=0;i--)
       {
           suff[i]=max(suff[i+1],nums[i]);
       }
       //Now The Main Logic
       long long ans=0;
       for(int i=1;i<nums.size()-1;i++)
       {
           long long val=(1LL*pre[i-1]- 1LL*nums[i])*1LL*suff[i+1];
           if(val > ans)
           ans=val;

       }
       return ans;
    }
};
