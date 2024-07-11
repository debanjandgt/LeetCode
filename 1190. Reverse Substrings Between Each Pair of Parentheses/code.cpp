class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        for(auto i:s)
        {
            if(i != ')')
            st.push(i);
            else if(i == ')')
            {
                string temp="";
                while(st.top() != '(')
                {
                    auto i=st.top();
                    st.pop();
                    temp.push_back(i);
                }
                st.pop();
                for(int i=0;i<temp.size();i++)
                st.push(temp[i]);
            }
        }
        string ans="";
        while(st.size())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
