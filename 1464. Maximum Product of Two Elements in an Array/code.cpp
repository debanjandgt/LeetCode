class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        n-=1;
        int v1=nums[n];
        int v2=nums[n-1];

        v1-=1;
        v2-=1;

        return v1*v2;
    }
};
