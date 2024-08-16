class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int miniArr=0;
        int maxiArr=0;
        int maxi=arrays[0][arrays[0].size()-1];
        int mini=arrays[0][0];
        for(int i=1;i<arrays.size();i++)
        {
            if(arrays[i][0] < mini)
            {
                miniArr=i;
                mini=arrays[i][0];
            }
            if(arrays[i][arrays[i].size()-1] > maxi)
            {
                maxiArr=i;
                maxi=arrays[i][arrays[i].size()-1];
            }
        }
        int ans=0;
        for(int i=0;i<arrays.size();i++)
        {
            if(i != miniArr)
            {
                int len=arrays[i].size();
                int lastVal=arrays[i][len-1];
                
                ans=max(ans,abs(lastVal-mini));
               
            }
            if(i != maxiArr)
            {
                int lv=arrays[i][0];
                ans=max(ans,abs(lv-maxi));
            }
        }
        return  ans;
    }
};
