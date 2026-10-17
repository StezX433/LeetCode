
class MyQueue {
private:
    stack<int> seen;
    stack<int> seen2;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        seen.push(x);
    }
    
    int pop() {
        if (seen2.empty()) {
            while (!seen.empty()) {
                seen2.push(seen.top());
                seen.pop();
            }
        }

        int x = seen2.top();
        seen2.pop();
        return x;
    }
    
    int peek() {
        if (seen2.empty()) {
            while (!seen.empty()) {
                seen2.push(seen.top());
                seen.pop();
            }
        }

        return seen2.top();
    }
    
    bool empty() {
        return seen.empty() && seen2.empty();
    }
};
