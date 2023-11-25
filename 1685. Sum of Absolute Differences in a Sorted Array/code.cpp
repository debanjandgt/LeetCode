class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
       vector<int> pre(nums.size());
       vector<int> suff(nums.size());
       pre[0]=nums[0];
       suff[nums.size()-1]=nums[nums.size()-1];
       //Let's Make The PRE
       for(int i=1;i<nums.size();i++)
       {
           pre[i]=pre[i-1]+nums[i];
       } 
       suff[nums.size()-1]=nums[nums.size()-1];
       for(int i=nums.size()-2;i>=0;i--)
       {
           suff[i]=suff[i+1]+nums[i];
       }

       vector<int> answer;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
           int LS=(i>=1)?pre[i-1]:0;
           int RS=(i+1<n)?suff[i+1]:0;

           int ans=abs(LS-nums[i]*i) + abs(RS-nums[i]*(n-i-1));
           answer.push_back(ans);
       }
       return answer;
    }
};
