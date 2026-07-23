#include<bits/stdc++.h>
using namespace std;

// Remove all the elements and then add value at bottom of stack and then again re-enter all the values back.

void insertbottom (stack<int> &s,int value) {
    if(s.empty()){
        s.push(value);
        return;
    }

    int temp = s.top();
    s.pop();

    insertbottom(s,value);
    s.push(temp);
}

int main () {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    insertbottom(s,4);

    while(!s.empty()) {
        cout << s.top() <<" ";
        s.pop();
    }
    return 0;
}