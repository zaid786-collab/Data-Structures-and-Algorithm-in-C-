#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &qt) {
    stack<int> temp;
    int n = qt.size();

    for(int i=0;i<n;i++) {
        temp.push(qt.front());
        qt.pop();
    }

    while(!temp.empty()) {
        qt.push(temp.top());
        temp.pop();
    }
}

int main () {
    queue<int> qt({1,2,3,4,5});
    
    reverse(qt);

    while(!qt.empty()) {
        cout << qt.front() << " ";
        qt.pop();
    }

    return 0;
}