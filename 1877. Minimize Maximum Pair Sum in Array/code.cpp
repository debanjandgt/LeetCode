class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            int sum=nums[l]+nums[r];
            l++;
            r--;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
