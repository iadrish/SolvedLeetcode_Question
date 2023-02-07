class MinStack {
public:
    int stack[10000];
    int min[10000];
    int topp;
    int minp;
    MinStack() {
        topp=-1;
        minp=-1;
        
    }
    
    void push(int val) {
        if(topp>=10000)return;
        stack[++topp]=val;
        
        if(minp>=0)
        {
            if(min[minp]>val)
                min[++minp]=val;
            else
            {
                min[minp+1]=min[minp];
                minp+=1;
            }
        }
        else
            min[++minp]=val;
    }
    
    void pop() {
        if(topp<0)
            return;
        topp-=1;
        minp-=1;
    }
    
    int top() {
        return stack[topp];
    }
    
    int getMin() {
        return min[minp];
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