class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if((s[i]=='(')||(s[i]=='{')||(s[i]=='[')){
            st.push(s[i]);
            cout << "pushed -> " << s[i] << endl;
            }
            else{
                if(st.size()>=1){
                if(s[i]==')'){
                    if(st.top()!='(')
                    return false;
                    else
                        st.pop();
                }
                else if(s[i]=='}'){
                    if(st.top()!='{')
                    return false;
                    else
                        st.pop();
                }
                else if(s[i]==']'){
                    if(st.top()!='[')
                    return false;
                    else
                        st.pop();
                }
            }
            else
            return false;
            }
            
        }
        return st.empty();
    } 
};
