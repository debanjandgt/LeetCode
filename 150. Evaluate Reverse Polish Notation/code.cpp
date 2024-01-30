class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto i:tokens)
        {
            if(i != "+" && i != "-" && i!= "*" && i!= "/")
            {
                int value=stoi(i);
                cout << value << endl;
                st.push(value);
            }
            else
            {
                if(st.size() >= 2)
                {
                    int v1=st.top();
                    st.pop();
                    int v2=st.top();
                    st.pop();
                    if(i == "+")
                    v1=v1+v2;
                    else if(i == "-")
                    v1=v2-v1;
                    else if(i == "*")
                    v1=v1*v2;
                    else 
                    v1=v2/v1;

                    st.push(v1);
                }
            }
        }
        return st.top();
    }
};
