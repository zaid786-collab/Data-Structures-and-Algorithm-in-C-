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

    node* splitatmid(node* head) {
        node* slow = head;
        node* fast = head;
        node* prev = head;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev != NULL) {
            prev->next = NULL;   // Splliting Done        
        }

        return slow;    // RightHead
    }

    node* merge(node* lefthead,node* Righthead) {
        List ans;
        node* i = lefthead;
        node* j = Righthead;

        while(i != NULL && j != NULL){
            if(i->data <= j->data){
                ans.pushback(i->data);
                i = i->next;
            }
            else{
                ans.pushback(j->data);
                j = j->next;
            }
        }

        while(i != NULL){
            ans.pushback(i->data);
            i = i->next;
        }

        while(j != NULL){
            ans.pushback(j->data);
            j = j->next;
        }

        return ans.head;
    }

    node* mergesort(node* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        node* righthead = splitatmid(head);   // Split List

        node* left = mergesort(head);   // Sorted Left List
        node* right = mergesort(righthead);  // Sorted Right List

        return merge(left,right);    // Merging Sorted Lists
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
    
    ll.pushback(5);
    ll.pushback(4);
    ll.pushback(3);
    ll.pushback(2);
    ll.pushback(1);


    ll.printlist();

    ll.head = ll.mergesort(ll.head);

    ll.printlist();
    return 0;
}