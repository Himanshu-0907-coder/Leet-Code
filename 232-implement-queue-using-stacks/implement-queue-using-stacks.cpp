class MyQueue {
public:
    stack<int> st;
    stack<int>helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() { 
        //Getting first bottom elemnt 2nd stack
        while(!st.empty()){
            int ele = st.top();
            st.pop();
            helper.push(ele);
        }
        
        //poping ele
        int popele = helper.top();
        helper.pop();
        //pushing elents back;
        while(!helper.empty()){
            int ele = helper.top();
            helper.pop();
            st.push(ele);
        }
        return popele;
    }
    
    int peek() {
        //Getting first bottom elemnt 2nd stack
        while(!st.empty()){
            int ele = st.top();
            st.pop();
            helper.push(ele);
        }
        
        //getting ele
        int topele = helper.top();
        //pushing elents back;
        while(!helper.empty()){
            int ele = helper.top();
            helper.pop();
            st.push(ele);
        }
        return topele;
    }
    
    bool empty() {
        return st.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */