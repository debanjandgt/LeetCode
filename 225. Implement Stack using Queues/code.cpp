class MyStack {
public:
    stack<int> st;

    MyStack() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        if (!st.empty()) {
            int topValue = st.top();
            st.pop();
            return topValue;
        }     
        else {
            return -1;
        }
    }
    
    int top() {
        if (!st.empty()) {
            return st.top();
        }
        else {
            return -1;
        }
    }
    
    bool empty() {
        return st.empty();
    }
};
