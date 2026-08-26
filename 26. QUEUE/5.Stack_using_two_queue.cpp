// Front of Queue is equal to Top of Stack.
// Move elements from Queue 1 to Queue 2 then insert new element in Queue 1 and after insertion move all elements back from Queue 2 to Queue 1.
// /Push Operation takes place in O(n).

#include<bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q1;
    queue<int> q2;

public:
    void push (int data) {
        // q1 -> q2
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(data);

        // q2 -> q1

        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop() {
        q1.pop();
    }

    int top() {
        return q1.front();
    }

    bool isempty () {
        return q1.empty();
    } 

    void print () {
        queue<int> temp = q1;

        while(!temp.empty()) {
            cout << temp.front() << endl;
            temp.pop();
        }cout << endl;
    }
};

int main () {
    Stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    s1.print();

    return 0;
}