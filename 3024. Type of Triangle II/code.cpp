class Solution {
public:
    string triangleType(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums)
            mp[i]++;
        if(mp.size() == 1)
            return "equilateral";
        
        if(nums[0]+nums[1] > nums[2] && nums[0]+nums[2] > nums[1] && nums[2]+nums[1] > nums[0])
            {
        if(mp.size() == 2)
            return "isosceles";
            else return "scalene";
        }
        else return "none";
    }
};
