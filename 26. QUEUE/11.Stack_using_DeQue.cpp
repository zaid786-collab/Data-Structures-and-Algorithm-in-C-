// Stack using Deque can be implemented using two ways,one is to insert and delete from back and by doing it our top of stack will be equal to back of Deque and in other way we can add or delete elements from front of the stack and then Front of the Dequq will be top of the stack.


#include<bits/stdc++.h>
using namespace std; 

class Stack {
    deque<int> qt;
public:
    void push(int data) {
        qt.push_back(data);
    }

    void pop() {
        qt.pop_back();
    }

    int top() {
        return qt.back();
    }

    bool empty () {
        return qt.empty();
    }
};

int main () {
    Stack st;

    for(int i=0;i<5;i++){
        st.push(i);
    }

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    } 
    
    return 0;
}