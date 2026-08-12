// Queue starts from front pointer and ends on rear pointer.

// To use the front empty space of Queue we use circular queue where after last index,elements will enter at first index if first one are empty.

// On Pop the currsize will decrese which means that currsize != capacity so queue have some space to hold elements and on Push currsize++ which indicates that Queue is full so can't take more elements.

// Elements in Queue adds from rear and poped from front but to use blank space of front we use circular Queue so new elements are inserted at starting positions but they are not the front of Queue.

#include<bits/stdc++.h>
using namespace std;

class Queue {
    int* arr;

    int capacity;
    int currsize;

    int f,r;

public:
    Queue(int arrsize) {
        capacity = arrsize;
        arr = new int[capacity];
        currsize = 0;
        f = 0;
        r = -1;
    }

    void push(int data) {
        if((currsize == capacity)){
            cout << "Queue is full! Cannot add" << endl;
            return;
        }
        r = (r+1) % capacity;
        arr[r] = data;
        currsize++;
    }

    void pop() {
        if(empty()){
            cout << "Queue is Empty! Nothing to delete" << endl;
            return;
        }
        arr[f] = -1;
        f = (f+1) % capacity;
        currsize--;
    }

    int top() {
        if(empty()){
            return -1;
        }
        return arr[f];
    }

    bool empty () {
        return currsize == 0;
    }

    void print() {
        for(int i=0;i<capacity;i++){
            cout << arr[i] << " ";
        }cout << endl;
    }

    void printrear(){
        cout << "Rear Element is : " << arr[r] << endl;
    }

};

int main() {
     
    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "Front : " << q.top() << endl;
    q.print();

    q.pop();

    cout << "Front : " << q.top() << endl;
    q.print();

    q.push(7);

    cout << "Front : " << q.top() << endl;
    q.print();

    q.printrear();

    return 0;
}