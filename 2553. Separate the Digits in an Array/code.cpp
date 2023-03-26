class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string s;
        for(int i=0;i<nums.size();i++)
        {
            string a=to_string(nums[i]);
            s+=a;
        }
        vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            int v=c-'0';
            ans.push_back(v);
        }
        return ans;
    }
};
