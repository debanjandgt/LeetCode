class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1[0];
        int n2=nums2[0];
        int prob=INT_MAX;
        for(int i=0;i<nums1.size();i++)
        {
            n1=min(n1,nums1[i]);
            if(count(nums2.begin(), nums2.end(), nums1[i]))
            {
                prob=min(prob,nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
     
            n2=min(n2,nums2[i]);
        }
        if(prob != INT_MAX)
        return prob;
            string ans="";
            string a=to_string(n1);
            ans=ans+a;
            a=to_string(n2);
            ans=ans+a;
            int value1=stoi(ans);
            int rev=0;
            int copy=value1;
            while(copy>0)
            {
                int a = copy%10;
                rev=rev*10+a;
                copy/=10;
            }
            return min(value1,rev);
        
    }
};
