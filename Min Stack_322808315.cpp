class MinStack {
public:
    /** initialize your data structure here. */
    int tp = 0;
    int arr[100001];
    int minn[100001];
    MinStack() {
        arr[0] =  INT_MAX; 
        minn[0] = 0;
    }
    
    void push(int x) {
        tp += 1;
        arr[tp] = x;
        if( arr[minn[tp-1]] > x)
        {
            minn[tp] = tp;
        }
        else
        {
            minn[tp] = minn[tp-1];
        }
    }
    
    void pop() {
        tp -= 1;
    }
    
    int top() {
        return arr[tp];
    }
    
    int getMin() {
        return arr[minn[tp]];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 
 
 
 
 
 
 
 
 
 */
