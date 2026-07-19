#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int> stack;
public:
    void push (int value){
        stack.push_back(value);
        return;
    }
    void pop(){
        if(isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }
        stack.pop_back();
        return;
    }
    int top(){
        if(isEmpty()) {
            cout << "Stack is Empty\n";
            return 0;
        }
        int length = stack.size() -1;
        return stack[length];
    }

    bool isEmpty(){
       return stack.size() == 0;
    }
};

int main(){
    Stack s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}