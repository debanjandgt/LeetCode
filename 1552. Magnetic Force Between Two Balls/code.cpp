class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        long long mini=position[0];
        long long maxi=position[0];
        for(auto i:position)
        {
            mini=min(1LL*i,mini);
            maxi=max(1LL*i,maxi);
        }
        long long ans=maxi-mini;
        maxi=maxi-mini;
        mini=1;
        while(mini <= maxi)
        {
            int fl=0;
            long long midi=(mini+maxi)/2;
            int placed=1;
            int last=position[0];
            for(int i=1;i<position.size();i++)
            {
                if(position[i]-last >= midi)
                {
                    placed++;
                    last=position[i];
                }
                if(placed == m)
                {
                    fl=1;
                    break;
                }
            }
            if(fl == 1)
            {
                ans=midi;
                mini=midi+1;
            }
            else
            { 
                maxi=midi-1;
            }
        }
        return ans;
    }
};
