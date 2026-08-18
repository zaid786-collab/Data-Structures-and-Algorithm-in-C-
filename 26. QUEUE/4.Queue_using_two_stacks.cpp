#include<bits/stdc++.h>
using namespace std;

class Queue {
    stack<int> s1;
    stack<int> s2;
public:

    void push (int data) {
        // /s1 -> s2
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // /Now enter data into s1
        s1.push(data);

        // s2 -> s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop () {
        s1.pop();
    }

    int front () {
        return s1.top();
    }

    bool isempty () {
        return s1.empty();
    } 

    void print () {
        stack<int> temp = s1;

        while(!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }cout << endl;
    }
};

int main () {
    Queue q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);

    q1.print();

    q1.pop();

    q1.print();

    return 0;
}