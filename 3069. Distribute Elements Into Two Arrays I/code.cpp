class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
       vector<int> a,b;
       a.push_back(nums[0]);
       b.push_back(nums[1]);
       int pos=2;
       while(pos < nums.size()) 
       {
           int v=nums[pos];
           if(a.back() > b.back())
           a.push_back(v);
           else 
           b.push_back(v);
           pos++;
       }
       int p=0;
       for(int i=0;i<a.size();i++)
       {
           nums[p++]=a[i];
       }
         for(int i=0;i<b.size();i++)
       {
           nums[p++]=b[i];
       }
       return nums;
    }
};
