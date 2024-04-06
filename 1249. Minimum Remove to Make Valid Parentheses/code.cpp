class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ch != '(' && ch != ')')
            ans.push_back(ch);

            else
            {
                if(ch =='(')
                {
                    ans.push_back(ch);
                    st.push('(');
                }
                else
                {
                    if(st.size()>=1)
                    {
                        ans.push_back(')');
                        st.pop();
                    }
                }
            }
        }
        int pos=ans.size()-1;
        while(st.size() >= 1)
        {
            if(ans[pos] == '(')
            {
                ans[pos]='*';
                st.pop();
            }
            pos--;
        }
        string fAns="";
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i] !='*')
            fAns+=ans[i];
        }
        return fAns;
    }
};
