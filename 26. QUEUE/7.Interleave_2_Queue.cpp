#include <bits/stdc++.h>
using namespace std;

void interleave(queue<int> &original) {
    int n = original.size()/2;
    queue<int> first;

    for(int i=0;i<n;i++){
        first.push(original.front());
        original.pop();
    }

    while(!first.empty()) {
        original.push(first.front());
        first.pop();
        original.push(original.front());
        original.pop();
    }
}

int main() {
    queue<int> original({1,2,3,4,5,6,7,8,9,10});

    interleave(original);

    queue<int> temp = original;

    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    return 0;
}