
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> ans1;
        vector<int> ans2;
        for (int i = 0; i < nums1.size(); i++) {
            if (std::find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end())
            if(std::find(ans1.begin(),ans1.end(),nums1[i]) == ans1.end())
                ans1.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (std::find(nums1.begin(), nums1.end(), nums2[i]) == nums1.end())
            if(std::find(ans2.begin(),ans2.end(),nums2[i]) == ans2.end())
                ans2.push_back(nums2[i]);
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
