class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> n1;
        vector<int> n2;
        int i=0;
        for(i=0;i<n;i++)
        n1.push_back(nums[i]);
        for(i=n;i<nums.size();i++)
        n2.push_back(nums[i]);
        nums.clear();
        for(i=0;i<n1.size();i++){
        nums.push_back(n1[i]);
        nums.push_back(n2[i]);
        }
        return nums;
    }
};
