class MinStack {
public:
    stack<int> s;

    MinStack() {
        
        
    }
    
    void push(int val) {
        s.push(val);   
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        stack<int> temp; 
        int mini= s.top();
        while(s.size()){
            mini=min(mini,s.top());
            temp.push(s.top());
            s.pop();
        }

        while(temp.size()){
            s.push(temp.top());
            temp.pop();
        }
        return mini;
    }
};
