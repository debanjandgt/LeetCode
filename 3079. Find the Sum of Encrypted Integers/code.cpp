class Solution {
public:
    int getNum(int x)
    {
        int maxi=-1;
        int copy=x;
        while(copy > 0)
        {
            int a=copy%10;
            maxi=max(maxi,a);
            copy/=10;
        }
        string xx=to_string(x);
        int len=xx.size();
        string temp="";
        for(int i=0;i<len;i++)
        {
            char ch=maxi+'0';
            temp+=ch;
        }
        int value=stoi(temp);
        return value;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        long long int ans=0;
        for(auto i:nums)
        {
            int num=getNum(i);
            ans+=num;
        }
        return ans;
    }
};
