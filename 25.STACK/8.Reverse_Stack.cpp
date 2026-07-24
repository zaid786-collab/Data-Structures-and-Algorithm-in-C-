#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N)

void push_at_bottom(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    int temp = s.top();
    s.pop();

    push_at_bottom(s,value);
    s.push(temp);

}

// To Reverse a Stack by Recursion we will go by removing top element from stack and then inserting push at bottom of the Stack.

void reverse(stack<int> &s) {
    if(s.empty()){
        return;
    }

    int temp = s.top();
    s.pop();

    reverse(s);
    push_at_bottom(s,temp);
}

void printstack(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }cout << endl;
}

int main () {
    stack <int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    printstack(s);

    reverse(s);

    printstack(s);

    return 0;
}