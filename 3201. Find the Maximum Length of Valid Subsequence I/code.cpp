class Solution {
public:
    int maximumLength(vector<int>& nums) {
       int l1=0,l2=0,l3=0,l4=0;
       for(auto i:nums)
       {
        if(i%2 == 0)
        l2++;
        else
        l1++;
       }
       int fl=0;
       for(auto i:nums)
       {
        if(fl == 0)
        {
            if(i%2 == 0)
            {
                l3++;
                fl=!fl;
            }
        }
        else if(fl == 1)
        {
            if(i%2 == 1)
            {
                l3++;
                fl=!fl;
            }
        }
       }
       fl=0;
       for(auto i:nums)
       {
        if(fl == 0)
        {
            if(i%2 == 1)
            {
                l4++;
                fl=!fl;
            }
        }
        else if(fl == 1)
        {
            if(i%2 == 0)
            {
                l4++;
                fl=!fl;
            }
        }
       }
       return max({l1,l2,l3,l4}); 
    }
};
