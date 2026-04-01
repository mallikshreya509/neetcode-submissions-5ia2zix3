class MinStack {
public:
 stack<int>st;  
    MinStack() {  
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()){
            st.pop();
        }
    }
    
    int top() {
        if(!st.empty()){
        int temp=st.top(); return temp;}
    }
    
    int getMin() {
        stack<int> tmp;
        int mini = st.top();
        while (st.size()) {
            mini = min(mini, st.top());
            tmp.push(st.top());
            st.pop();
        }

        while (tmp.size()) {
            st.push(tmp.top());
            tmp.pop();
        }
        return mini;
    }
};
