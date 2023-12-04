class Solution {
public:
    string largestGoodInteger(string num) {
        int i=0,r=0;
        int prev=-1e9;
        int n=num.size();
        char ch='X';
        string probable;
        deque<char> dq;
        while(r<n)
        {
            dq.push_back(num[r]);
            if(r-i+1 == 3)
            {
                unordered_set<char> st(dq.begin(),dq.end());
                if(st.size() == 1)
                {
                    if(ch=='X')
                   {
                       int asc=dq.front() -'0';
                       prev=asc;
                       ch=dq.front();
                        probable="";
                          probable.push_back(ch);
                           probable.push_back(ch); probable.push_back(ch);
                   } 
                    else
                    {
                      int asc=dq.front() -'0';
                      cout << "PREV->" << prev << endl;
                      cout << "ASC->" << asc << endl;
                      if(asc > prev)
                      {
                          ch=dq.front();
                          prev=asc;
                          probable="";
                          probable.push_back(ch);
                           probable.push_back(ch); probable.push_back(ch);
                      }
                    }
                    cout << probable << endl;
                }
                dq.pop_front();
                i++;
            }
            r++;
        }
        if(ch == 'X')
        return "";
        return probable;
    }
};
