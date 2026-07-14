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

    List(){
        head = NULL;
        tail = NULL;
    }

    void pushback(int value) {
        node* temp = new node(value);

        if(tail == NULL){
            head = tail = temp;
            return;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void pushfront(int value){
        node* temp = new node(value);

        if(head == NULL){
            head = tail = temp;
            return;
        }else{
            temp->next = head;
            head = temp;
        }
    }

    node* splitatmid(node* head) {
        node* slow = head;
        node* fast = head;
        node* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev != NULL){
            prev->next = NULL;
        }

        return slow;
    }

    node* reverse(node* righthead) {
        node* prev = NULL;
        node* curr = righthead;
        node* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev; // returns head of reversed linked list
    }

    node* zigzag(node* head) {
        // To Spli List in 2 Parts : 
        node* righthead = splitatmid(head);
        // To reverse the right linked list : 
        node* rightheadrev = reverse(righthead);

        // Alternate Merging for zigzag linked list : 

        node* left = head;
        node* right = rightheadrev;
        node* tail = head;

        while(left != NULL && right != NULL){
            node* leftnext = left->next;
            node* rigthnext = right->next;

            left->next = right;
            right->next = leftnext;

            tail = right;

            left = leftnext;
            right = rigthnext;
        }

        if(right != NULL){
            tail->next = right;  // In case of Odd LinkedList there will be one extra element in right list.
        }

        return head;
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
    ll.pushback(5);

    ll.printlist();

    ll.head = ll.zigzag(ll.head);

    ll.printlist();


}