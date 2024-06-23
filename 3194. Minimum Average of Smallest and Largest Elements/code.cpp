class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> dVec;
        sort(nums.begin(),nums.end());
        int k=nums.size()/2;
        while(k-- > 0)
        {
            double val=nums[0]+nums[nums.size()-1];
            val/=2;
            dVec.push_back(val);
            vector<int> newNums;
            for(int i=1;i<nums.size()-1;i++)
            {
                newNums.push_back(nums[i]);
            }
            nums.resize(newNums.size());
            nums=newNums;
        }
        sort(dVec.begin(),dVec.end());
        return dVec[0];
    }
};
