#include<bits/stdc++.h>
using namespace std;

class node  {
public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};

class List {
public:
    node* head;
    node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void pushfront(int value){
        node* temp = new node(value);

        if(tail == NULL){
            head = tail = temp;
            return;
        }else{
            temp->next = head;
            head = temp;
        }
    }

    void popfront(){
        if(head == NULL){
            return;
        }
        else{
            node* temp = head;
            head = head->next;

            head->next = NULL;
            delete temp;
        }
    }

    void pushback(int value){
        node* temp = new node(value);

        if(head == NULL){
            head = tail = temp;
            return;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void popback(){
        if(head == NULL){
            return;
        }
        
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }
        
        node* temp = head;
        
        while(temp -> next != NULL){
            temp = temp->next;
        }
        delete tail;

        tail = temp;
        tail->next = NULL;
    }

    // Floyds Algorithm to Check Loop : 
    bool isCycle(){
        node* slow = head;
        node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout << "Cycle Exists\n";
                return true;
            }
        }

        cout << "Cycle Do not Exists\n";
        return false;
    }


    void printlist(){
        node* temp = head;

        while(temp->next != NULL){
            cout << temp->data << "--> ";
            temp = temp -> next;
        }cout<<"NULL\n";
    }
};

int main() {

    List ll;
    
    ll.pushback(1);
    ll.pushback(2);
    ll.pushback(3);
    ll.pushback(4);

    ll.tail->next = ll.head;

    ll.isCycle();

    return 0;
}