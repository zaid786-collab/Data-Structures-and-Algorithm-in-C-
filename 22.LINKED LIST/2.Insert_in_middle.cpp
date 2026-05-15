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
        // cout<<"~Node "<<data<<endl;
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

    void push_fornt(int value){
        node* newnode = new node(value);
        if(head == NULL){
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }

    void push_back(int  value){
        node* newnode = new  node(value);
        if(head == NULL){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void inert_middle(int pos,int value){
        node* newnode = new node(value);

        node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp == NULL){
                cout<<"Invalid Index";
                return;
            }
            temp = temp->next;
        }
        // temp is now at pos-1.
        newnode->next = temp->next;
        temp->next = newnode; 

    }

    void pop_front(){
        if(head == NULL){
            cout<<"Nothing to delete\n";
            return;
        }

        node* temp = head;
        head = head->next;
        // we need to store previous head bc we want to delete it as it is alloted dyamically.
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void searchitr(int key){
        node* temp = head;
        int count = 0;
        while(temp != NULL){
            if(temp->data == key){
                cout<<"Address of the key : "<<temp<<endl;
                cout<<"Position of the key is : "<<count<<endl;
                return;
            }
            temp = temp->next;
            count++;
        }
        cout<<"Key not found\n";
    }

    int helper(node* temp,int key){
        if(temp == NULL){
            return -1;
        }
        if(temp->data == key){
            return 0;
        }

        int idx = helper(temp->next,key);
        if(idx == -1){
            return -1;
        }

        return idx+1;
    }

    int searchrec(int key){
        return helper(head,key);
    }

    void reverse(){
        node* prev = NULL;
        node* curr = head;
        tail = head;
        while(curr != NULL){
            node* next = curr->next;
            curr->next = prev;

            //updations for next itr
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    int size(){
        int sz = 0;
        node* temp = head;

        while(temp !=  NULL){
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    void removen(int n){
        node* prev = head;

        for(int i=1;i<(size()-n);i++){
            prev = prev->next;
        }

        node* todel = prev->next;
        cout<<"Going to Delete : "<<todel->data<<endl;
        prev->next = prev->next->next;
    }

    void print_list(){
        node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }

    ~List(){
        // cout<<"~List\n";
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
};

int main(){
    List la;
    la.push_fornt(9);
    la.push_fornt(3);
    la.push_fornt(5);
    la.push_fornt(7);
    la.push_back(8);
    la.push_back(6);
    la.push_back(4);
    la.print_list();
    la.inert_middle(2,790);
    // la.pop_front();
    // la.print_list();
    // la.pop_back();
    la.print_list();
    // la.searchitr(52);
    int ans = la.searchrec(9);
    cout<<"Index of key is : "<<ans<<endl;
    la.reverse();
    la.print_list();
    la.removen(2);
    la.print_list();
    return 0;
}