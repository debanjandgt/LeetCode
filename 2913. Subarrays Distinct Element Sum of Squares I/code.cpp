class Solution {
public:
    int sumCounts(vector<int>& nums) {
        vector<set<int>> vec;
        for(int i=0;i<nums.size();i++)
        {
            set<int> temp;
            temp.insert(nums[i]);
            vec.push_back(temp);
            for(int j=i+1;j<nums.size();j++)
            {
                temp.insert(nums[j]);
                vec.push_back(temp);
            }
        }
        long long cnt=0;
        for(auto i:vec)
        {
            int l=i.size();
            cnt+=(l*l);
        }
        return cnt;
    }
};
