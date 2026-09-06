// /DeQue is a type of Data Structures in which we can insert element from bothe front and rear and can also delete element from both front and rear.
// In normal queue we only track element from front pointer but here we can track both front and back pointer.

#include<bits/stdc++.h>
using namespace std;

int main () {
    deque<int> qt;

    qt.push_front(1);
    qt.push_back(5);
    qt.push_front(2);
    qt.push_back(4);
    qt.push_front(3);
    qt.push_back(3);

    cout << qt.front() << " " << qt.back() << endl;

    while(!qt.empty()) {
        cout << qt.front() << " ";
        qt.pop_front();
    }

    return 0;
}