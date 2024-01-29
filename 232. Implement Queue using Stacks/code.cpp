class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty()){
        while(!s1.empty())
        {
            int v1=s1.top();
            s1.pop();
            s2.push(v1);
        }
        }
        int v=s2.top();
        s2.pop();
        return v;
    }
    int peek() {
        if(s2.empty()){
        while(!s1.empty())
        {
            int v1=s1.top();
            s1.pop();
            s2.push(v1);
        }
        }
        int v=s2.top();
        return v;
    }
    
    bool empty() {
        while(!s1.empty())
        {
            int v1=s1.top();
            s1.pop();
            s2.push(v1);
        }
        return s2.empty();
    }
};
