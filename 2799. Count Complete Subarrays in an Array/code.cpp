class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int numberOfDistinctElements =0;
        set<int> s1;
        for(int i=0;i<nums.size();i++)
        {
            s1.insert(nums[i]);
        }
        numberOfDistinctElements = s1.size();
       int count = 0;
       set<int> st;
       vector<int> a1;
       for(int i=0;i<nums.size();i++)
       {
           st.clear();
           st.insert(nums[i]);
           if(st.size() == numberOfDistinctElements)
            count++;
           for(int j=i+1;j<nums.size();j++)
           {
               st.insert(nums[j]);
               if(st.size() == numberOfDistinctElements)
               count++;
           }
       }
       return count;
    }
};
