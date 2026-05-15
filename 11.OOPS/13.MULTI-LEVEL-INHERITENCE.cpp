#include<bits/stdc++.h>
using namespace std;

class animal{
    public : 
    string color;

    void eats(){
        cout<<"Animal Eats"<<endl;
    }
};

class mammal : public animal {
    public:
    string bloodtype;
    string tail;

    // Constructor
    mammal(){
        bloodtype = "warm";
    }
};

class dog : public mammal{
    void barks(){
        cout<<"Dog Barks"<<endl;
    }
};

int main(){
    dog tom;
    cin>>tom.color;
    cout<<tom.color<<endl;
    cout<<tom.bloodtype;
    cin>>tom.tail;
    cout<<tom.tail;


    return 0;
}

/*
1. Types of Inheritence : 
    a. Single Inheritence  : Parent Class --> Derived Class
    b. Multi-level Inheritence : Parent Class --> Derived Class --> Derived Class.
    c. Multiple Inheritence : Parent Class 1 + Parent Class 2 --> Derived Class.
    d. Hiearchial Inheritence : Multiple Child Class from a Parent Class.
*/