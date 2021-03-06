
typedef int Stack_entry;
 
class Stack {
public:
    Stack_entry s[10000];
    int pos;
    Stack() {
        pos = 0;
    }
    bool empty() const {
        return pos == 0;
    }
    int size() const {
        return pos;
    }
    void push(const Stack_entry &item) {
        s[pos++] = item;
    }
    void pop() {
        if (pos == 0) return;
        pos--;
    }
    Stack_entry top() const {
        if (pos == 0) return -1;
        return s[pos - 1];
    }

};
 
typedef Stack MyStack;       


