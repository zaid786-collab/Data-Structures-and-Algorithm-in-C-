#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
public:
    Node* head;
    Node* tail;

    Queue() {
        head = tail = NULL;
    }

    void push(int value) {
        Node* newnode = new Node(value);

        if(head == NULL){
            head = tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;
    }    

    void pop() {
        if(isempty()){
            cout << "Queue is Empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;

        if(head == NULL){
            temp = NULL;
        }
    }

    int top() {
        if(isempty()){
            cout << "Queue is Empty" << endl;
            return -1;
        }

        cout << "Top of Queue is : ";
        return head->data;
    }

    bool isempty() {
        return head == NULL;
    }

    void print() {
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }cout << "NULL" << endl;
    }

};


int main() {
    Queue q1;

    int num = 6;
    while(num--){
        q1.push(num);
    }

    q1.print();

    q1.pop();

    q1.print();

    cout << q1.top() << endl;

    cout << q1.isempty() << endl;

    return 0;
}