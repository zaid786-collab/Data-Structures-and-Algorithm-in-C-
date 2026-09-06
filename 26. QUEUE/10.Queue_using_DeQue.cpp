#include<bits/stdc++.h>
using namespace std;

class Queue {
    deque<int> qt;
public:
    void push(int data) {
        qt.push_back(data);
    }

    void pop() {
        qt.pop_front();
    }

    int front() {
        return qt.front();
    }

    bool empty() {
        return qt.empty();
    }
};

int main () {
    Queue q;

    for(int i=0;i<5;i++) {
        q.push(i);
    }

    cout << q.front() << endl;
    cout << q.empty() << endl;

    q.pop();

    cout << q.front() << endl;

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}