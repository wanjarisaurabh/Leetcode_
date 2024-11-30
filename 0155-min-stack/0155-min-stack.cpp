class MinStack {
    stack<long long> s1;
    long long mini;

public:
    MinStack() {
        mini = LLONG_MAX;  // Initialize the minimum value to the largest possible long long value
    }
    
    void push(int val) {
        if (s1.empty()) {
            mini = val;
            s1.push(val);
        } else {
            if (val >= mini) {
                s1.push(val);
            } else {
                s1.push(2 * (long long)val - mini);  // Store an encoded value
                mini = val;  // Update minimum value
            }
        }
    }
    
    void pop() {
        if (s1.empty()) {
            return;
        }
        
        long long topValue = s1.top();
        s1.pop();
        
        if (topValue < mini) {
            mini = 2 * mini - topValue;  // Recover the old minimum
        }
    }
    
    int top() {
        if (s1.top() < mini) {
            return mini;  // If the encoded value is less than the minimum, return the minimum
        }
        
        return s1.top();
    }
    
    int getMin() {
        return mini;  // Return the current minimum
    }
};
