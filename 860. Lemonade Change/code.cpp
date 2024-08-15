class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> mp;
        for(auto i:bills)
        {
            if(i == 5)
            {
                mp[i]++;
            }
            else if(i == 10)
            {
                if(mp[5] >= 1)
                {
                    mp[5]--;
                    mp[10]++;
                }
                else
                return false;
            }
            else if(i == 20)
            {
                if(mp[10] >= 1 && mp[5] >= 1)
                {
                    mp[10]--;
                    mp[5]--;
                    mp[20]++;
                }
                else if(mp[5] >= 3)
                {
                    mp[5]-=3;
                    mp[20]++;
                }
                else return false;
            }
        }
        return true;
    }
};
