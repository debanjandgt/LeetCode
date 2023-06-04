class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> s;
        sort(nums.begin(),nums.end());
        do{
            s.push_back(nums);
        }
        while(next_permutation(nums.begin(),nums.end()));
        return s;
    }
};
