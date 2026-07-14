// #include<bits/stdc++.h>
#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printlist(list<int> ll){
    list<int>:: iterator itr;

    for(itr = ll.begin();itr != ll.end() ;itr++){
        cout << (*itr) << "->";
    }cout<<"NULL" << endl;
}

int main() {
    list<int> ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_front(7);
    ll.pop_front();

    printlist(ll);

    cout << "Size : " << ll.size() <<endl;
    cout << "Head of the List : " << ll.front() << endl;
    cout << "Tail of the List : " << ll.back() << endl;

    ll.insert(ll.begin(),3,5);

    printlist(ll);
}