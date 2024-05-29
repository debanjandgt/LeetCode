class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int maxiLength=0;
        int currCost=0;
        int i=0;
        int back=0;
        int currLength=0;
        while(i<s.size())
        {
            char c1=s[i];
            char c2=t[i];
            if(c1 == c2)
            {
                currLength++;
                maxiLength=max(maxiLength,currLength);
                i++;
                continue;
            }
            else
            {
                int diff=abs(c1-c2);
                currCost+=diff;
                while(currCost > maxCost)
                {
                    currCost-=abs(s[back]-t[back]);
                    back++;
                    currLength--;
                }
            currLength++;
            maxiLength=max(maxiLength,currLength);
            }
            i++;
        }
        return maxiLength;
    }
};
