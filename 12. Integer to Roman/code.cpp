class Solution {
public:
    static bool cmp(pair<int,string> p1,pair<int,string> p2)
    {
        return p1.first>p2.first;
    }
    string intToRoman(int num) {
        map<int,string> mp;
        mp[1000]="M";
        mp[900]="CM";
        mp[500]="D";
        mp[400]="CD";
        mp[100]="C";
        mp[90]="XC";
        mp[50]="L";
        mp[40]="XL";
        mp[10]="X";
        mp[9]="IX";
        mp[5]="V";
        mp[4]="IV";
        mp[1]="I";

        string ans;
        vector<pair<int,string>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),cmp);
        while(num > 0)
        {
            for(auto it:vec)
            {
                int d=num/it.first;
                while(d>0)
                {
                    ans=ans+it.second;
                    d--;
                }
                num=num%it.first;
            }
        }
        return ans;
    }
};
