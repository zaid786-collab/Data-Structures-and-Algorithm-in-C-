#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

    node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }

    ~node(){
        // Do nothing (avoid recursive deletion)
    }
};

class dlist{
    node* head;
    node* tail;

public:
    dlist(){
        head = NULL;
        tail = NULL;
    }

    // Destructor to free entire list
    ~dlist(){
        node* temp = head;
        while(temp != NULL){
            node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }

    // Insert at beginning
    void insert_beg(int value){
        node* newnode = new node(value);

        if(head == NULL){
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    // Insert at end
    void insert_end(int value){
        node* newnode = new node(value);

        if(tail == NULL){
            head = tail = newnode;
        }
        else{
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Insert at given index
    void insert_index(int value, int index){
        if(index == 0){
            insert_beg(value);
            return;
        }

        node* temp = head;
        int count = 0;

        while(temp != NULL && count < index - 1){
            temp = temp->next;
            count++;
        }

        if(temp == NULL){
            cout << "Index out of bound\n";
            return;
        }

        node* newnode = new node(value);

        newnode->next = temp->next;
        newnode->prev = temp;

        if(temp->next != NULL)
            temp->next->prev = newnode;
        else
            tail = newnode;

        temp->next = newnode;
    }

    // Insert in middle
    void insert_middle(int value){
        if(head == NULL){
            insert_beg(value);
            return;
        }

        int length = 0;
        node* temp = head;

        while(temp != NULL){
            temp = temp->next;
            length++;
        }

        int mid = length / 2;

        temp = head;
        for(int i = 0; i < mid - 1; i++){
            temp = temp->next;
        }

        node* newnode = new node(value);

        newnode->next = temp->next;
        newnode->prev = temp;

        if(temp->next != NULL)
            temp->next->prev = newnode;
        else
            tail = newnode;

        temp->next = newnode;
    }

    // Delete from front
    void delete_front(){
        if(head == NULL) return;

        node* temp = head;

        if(head == tail){
            head = tail = NULL;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
    }

    // Delete from end
    void delete_end(){
        if(tail == NULL) return;

        node* temp = tail;

        if(head == tail){
            head = tail = NULL;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
        }

        delete temp;
    }

    // Print list
    void printlist(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    dlist l;

    l.insert_beg(9);
    l.insert_beg(3);
    l.insert_beg(5);

    l.insert_end(2);
    l.insert_end(8);

    l.insert_index(70, 3);
    l.insert_middle(888);

    cout << "List after insertions:\n";
    l.printlist();

    l.delete_end();
    l.delete_front();

    cout << "List after deletions:\n";
    l.printlist();

    return 0;
}