class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=0,ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int a=nums[l];
                int b=nums[r];
                sum=a+b+nums[i];
                if(sum>target)
                r--;
                else
                l++;
                if(abs(sum-target)<abs(ans-target))
                ans=sum;
                }
            }
        return(ans);
    }
};
