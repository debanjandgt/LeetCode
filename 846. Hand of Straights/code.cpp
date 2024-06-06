class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize != 0)
        return false;
        unordered_map<int,int> mp;
        int miniVal=1e9;
        for(auto i:hand)
        {
            mp[i]++;
            miniVal=min(miniVal,i);
        }
        int temp=hand.size()/groupSize;
        int fl=0;
        while(temp-- > 0)
        {
            for(int i=0;i<groupSize;i++)
            {
                if(mp.find(miniVal) != mp.end() && mp[miniVal])
                {
                    mp[miniVal]--;
                    miniVal++;
                }
                else
                {
                    return false;
                }
            }
            miniVal=1e9;
            for(auto i:mp)
            {
                if(i.second >= 1)
                {
                    miniVal=min(miniVal,i.first);
                }
            }
        }
        return true;
    }
};
