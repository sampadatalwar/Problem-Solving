class MinStack {
public:
    list<int> minStack;
    list<int> stack;

    MinStack() {
        this->minStack = minStack;
        this->stack = stack;
        
    }
    
    void push(int val) {
        
        if(minStack.empty() || val <= minStack.front()){
            
            minStack.push_front(val);
        }
        stack.push_front(val);
    }
    
    void pop() {
        
        if(!stack.empty() && stack.front() == minStack.front()){
            
            minStack.pop_front();
        }
        
        if(!stack.empty()){
            stack.pop_front();
        }
    }
    
    int top() {
        
        if(!stack.empty()){
            return stack.front();
        }
        else
            return NULL;
    }
    
    int getMin() {
        
        if(!minStack.empty()){
            return minStack.front();
        }
        else
            return NULL;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */