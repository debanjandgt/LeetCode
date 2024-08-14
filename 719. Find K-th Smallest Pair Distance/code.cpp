class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int maxi_elem=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> counterBucket(maxi_elem+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int absDistance=abs(nums[i]-nums[j]);
                counterBucket[absDistance]++;
            }
        }
        int m=counterBucket.size();
        for(int i=0;i<maxi_elem;i++)
        {
            k-=counterBucket[i];
            if(k <= 0) return i;
        }
        return -1;
    }
};
