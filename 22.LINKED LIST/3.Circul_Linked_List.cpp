#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }

    ~node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    node* head;
    node* tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int value){
        node* newnode = new node(value);

        if(head == NULL){
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }

    void insertbeg(int value){
        node* newnode = new node(value);

        newnode->next = head;
        head = newnode;
    }

    void push_back(int value){
        node* newnode = new node(value);

        if(head == NULL){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void inertmiddle(int value,int pos){
        node* newnode = new node(value);

        node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp == NULL){
                cout<<"Invalid Index";
                return;
            }
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Nothing to delete";
            return;
        }
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Nothing to delete";
            return;
        }
        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void reverse(){
        node* prev = NULL;
        node* curr = head;
        tail = head;
        while(curr != NULL){
            node* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void print_list(){
        node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
};

int main(){

    List l;

    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.insertbeg(7);
    l.push_back(8);
    l.print_list();
    l.inertmiddle(121,3);
    l.print_list();
    l.pop_front();
    l.print_list();
    l.pop_back();
    l.reverse();
    l.print_list();

    return 0;
}