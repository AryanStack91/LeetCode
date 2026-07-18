class MinStack {
public:
    stack<long long int> s;
    long long int min_val;
    MinStack() {}

    void push(int val) {
        if (s.empty()) {
            s.push(val);
            min_val = val;
        } else {

            if (val < min_val) {

                s.push((long long int)2 * val - min_val);
                min_val = val;
            } else {
                s.push(val);
            }
        }
    }

    void pop() {
        if (s.top() < min_val) {
            min_val = 2 * min_val - s.top();
        }

        s.pop();
    }

    int top() {
        if (s.top() < min_val) {
            return min_val;
        } else {
            return s.top();
        }
    }

    int getMin() { return min_val; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */