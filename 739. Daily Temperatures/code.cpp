class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> vec(temperatures.size(),0);
        for(int i=temperatures.size()-1 ; i>= 0;i--)
        {
            if(st.size() == 0)
            {
                st.push(i);
                vec[i]=0;
            }
            else
            {
                while(!st.empty() && temperatures[i] >= temperatures[st.top()])
                {
                    st.pop();
                }
                if(st.size() == 0)
                {
                    vec[i]=0;
                }
                else
                {
                    vec[i]=st.top()-i;
                }
                st.push(i);
            }
        }
        return vec;
    }
};
