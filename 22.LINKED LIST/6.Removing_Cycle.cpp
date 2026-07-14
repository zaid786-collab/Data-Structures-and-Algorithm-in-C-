#include<bits/stdc++.h>
using namespace std;

class node {
public: 
    int data;
    node* next;

    node(int value){
        data = value;
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

    void pushback(int value) {
        node* temp = new node(value);

        if(head == NULL){
            head = tail = temp;
            return;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void pushfront(int value) {
        node* temp = new node(value);

        if(tail == NULL){
            head = tail = temp;
            return;
        }else{
            temp->next = head;
            head = temp;
        }
    }

    void removecycle() {
        //Detecting Cycle : 
        node* slow = head;
        node* fast = head;
        bool iscycle = false;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;

            if(slow == fast){
                cout <<"Cycle Exists"<< endl;
                iscycle = true;
                break;
            }
        }

        if(!iscycle){
            cout << "Cycle do not exist"<<endl;
            return;
        }

        slow = head;

        //special case - tail connected to head : 

        if(slow == fast){
            while(fast->next != slow){
                fast = fast->next;
            } 
            fast->next = NULL;     // remove cycle
        }
        // Normal Cycle Case :

        else {
            node* prev = fast;
            while(slow != fast) {
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = NULL;  // remove cycle
        }
    }

    void printlist(){
        node* temp = head;

        while(temp != NULL){
            cout << temp->data << "--> ";
            temp = temp -> next;
        }cout<<"NULL\n";
    }
};

int main(){

    List ll;
    
    ll.pushback(1);
    ll.pushback(2);
    ll.pushback(3);
    ll.pushback(4);

    ll.tail->next = ll.head;

    ll.removecycle();

    ll.printlist();

    return 0;
}