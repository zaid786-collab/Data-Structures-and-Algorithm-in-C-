#include<bits/stdc++.h>
using namespace std;

class Queue {
    int* arr;
    int start,end;
    int currsize,maxsize;

public:
    Queue () {
        maxsize = 10;
        arr = new int[maxsize];
        start = -1;
        end = -1;
        currsize = 0;
    }

    void push (int value) {
        if(currsize == maxsize){
            cout << "Queue is full" << endl;
            return;
        }

        // Queue is Empty : 
        if(end == -1) {
            start = 0;
            end = 0;
        }

        else {
            // Circular Indexing,prevents out of bound : 
            end = (end + 1) % maxsize;  
        }

        arr[end] = value;
        currsize++;
    }

    int pop () {
        if(start == -1) {
            cout << "Queue is Empty" << endl;
            return -1;
        }

        int poped = arr[start];

        // If only one elemnet in Queue : 
        if(currsize == 1){
            start = -1;
            end = -1;
        }

        else {
            start = (start + 1) % maxsize;
        }

        currsize--;
        return poped;
    }
    
    int peek () {
        if(start == -1){
            cout << "Queue is Empty" << endl;
            return 0;
        }
        return arr[start];
    }

    bool isempty () {
        return currsize == 0;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main () {

    Queue q1;

    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(7);

    cout << "Popped : " << q1.pop() << endl;;
    
    cout << "Front : "<<q1.peek()<<endl;

    while (!q1.isempty()){
        cout << q1.peek() << endl;
        q1.pop();
    }

    return 0;
}