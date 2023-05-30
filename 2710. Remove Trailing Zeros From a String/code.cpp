class Solution {
public:
    string removeTrailingZeros(string num) {
        int pos=-1;
        for(int i=num.size()-1;i>=0;i--)
        {
            if(num[i]!='0')
            {
                pos=i;
                break;
            }
        }
        if(pos == -1)
        return num;
        else
        return num.substr(0,pos+1);
    }
};
