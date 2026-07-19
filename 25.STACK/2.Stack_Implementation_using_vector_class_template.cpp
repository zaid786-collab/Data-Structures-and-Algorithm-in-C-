#include <bits/stdc++.h>
using namespace std;

template<class T>
class Stack {
    vector<T> stack;

public:
    void push(T value) {
        stack.push_back(value);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }
        stack.pop_back();
    }

    T top() {
        if (isEmpty()) {
            throw runtime_error("Stack is Empty");
        }
        return stack.back();   
    }

    bool isEmpty() {
        return stack.empty();  
    }
};

int main() {
    Stack<string> s;

    s.push("Learn");
    s.push("Coding");
    s.push("Google");

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}