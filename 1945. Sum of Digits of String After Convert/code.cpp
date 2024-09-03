class Solution {
public:
    int getLucky(string s, int k) {
        int ans=0;
        string initial="";
        for(auto i:s)
        {
            char ch=i;
            int d=ch-96;
            initial=to_string(d)+initial;
        }
        int num=0;
        while(k--)
        {
            num=0;
            for(auto i:initial)
            {
                int val=i-'0';
                num+=val;
            }
            initial="";
            initial=to_string(num);
        }
        return num;
    }
};
