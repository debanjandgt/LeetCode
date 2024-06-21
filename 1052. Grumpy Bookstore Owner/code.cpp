class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        long long ans=0;
        int n=grumpy.size();
        for(int i=0;i<n;i++)
        {
            if(grumpy[i] == 0)
            {
                ans+=customers[i];
                customers[i]=0;
            }
        }
        int i=0,r=0;
        long long curr=0;
        long long maxi=0;
        while(r<n)
        {
            curr+=customers[r];
            if(r-i+1 == minutes)
            {
                maxi=max(maxi,curr);
                curr-=customers[i];
                i++;
            }
            r++;
        }
        return ans+maxi;
    }
};
