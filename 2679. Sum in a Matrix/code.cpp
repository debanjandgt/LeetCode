class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
      for(int i=0;i<nums.size();i++)
      {
          sort(nums[i].begin(),nums[i].end());
      }
      int row=nums.size();
      int col=nums[0].size();
    int s=0;
      for(int i=0;i<col;i++)
      {
          int m=0;
          for(int j=0;j<row;j++)
          {
              m=max(m,nums[j][i]);
          }
          s+=m;
      }
      return s;
    }
};
