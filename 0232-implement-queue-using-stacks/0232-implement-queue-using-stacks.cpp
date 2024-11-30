class MyQueue {
    private:
    stack<int>inner, outer;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        inner.push(x);
        
    }
    
    int pop() {

if(outer.empty()){
    while(!inner.empty()){
    outer.push(inner.top());
    inner.pop();

}
}
if(outer.empty()){
    return -1;
}

int ele = outer.top();
outer.pop();
return ele;

        
    }
    
    int peek() {


if(outer.empty()){

    while(!inner.empty()){
    outer.push(inner.top());
    inner.pop();

}
}

int ele = outer.top();
return ele;


        
    }
    
    bool empty() {

        return inner.empty() && outer.empty();
        
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