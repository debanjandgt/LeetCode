class Solution {
public:
    int minimumChairs(string s) {
        
        int maxi=0;
        char prev=s[0];
        int longestCount=0;
        if(prev == 'E')
        longestCount=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == 'E' && prev == 'E')
            {
                longestCount++;
                maxi=max(maxi,longestCount);
            }
            else if(s[i] == 'E' && prev != 'E')
            {
                longestCount=1;
                maxi=max(maxi,longestCount);
            }
            else if(s[i] == 'L')
            {
                if(longestCount > 0)
                longestCount--;
                maxi=max(maxi,longestCount);
            }
        }
        maxi=max(maxi,longestCount);
        if(maxi == 0 && s[0] == 'E')
        return 1;
        return maxi;
    }
};
