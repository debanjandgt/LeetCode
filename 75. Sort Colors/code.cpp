class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> freq(3,0);
        for(auto i:nums)
        {
            freq[i]++;
        }
        int t=0;
        for(int i=0;i<=2;i++)
        {
            int fr=freq[i];
            while(fr)
            {
                nums[t++]=i;
                fr--;
            }
        }
    }
};
