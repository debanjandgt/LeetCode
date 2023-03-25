class Solution {
public:
    vector<int> evenOddBit(int n) {
        string s;
        while(n>0)
        {
            int a=n%2;
            char c=a+'0';
            s.push_back(c);
            n/=2;
        }
        
        int even=0,odd=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')
            {
                if(i%2 == 0)
                even++;
                else 
                odd++;
            }
            
        }
        return {even,odd};
    }
};
