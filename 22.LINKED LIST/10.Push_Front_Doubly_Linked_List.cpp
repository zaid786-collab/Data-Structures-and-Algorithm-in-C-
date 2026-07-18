#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class doublylist {
public:
    node* head;
    node* tail;

    doublylist() {
        head = NULL;
        tail = NULL;
    }

    void pushfront(int value) {
        node* newnode = new node(value);

        if(head == NULL){
            head = tail = newnode;
            return;
        }else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void printlist () {
        node* temp = head;

        while(temp != NULL){
            cout << temp->data << "<=>";
            temp = temp->next;
        }cout << "NULL\n";
    }
};

int main(){
    doublylist dl;

    dl.pushfront(5);
    dl.pushfront(4);
    dl.pushfront(3);
    dl.pushfront(2);
    dl.pushfront(1);

    dl.printlist();
    
    return 0;
}