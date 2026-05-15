#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    virtual void hello(){
        cout<<"Parent Class Hello\n";
    };
};

class Child : public Parent{
public:
    void hello(){
        cout<<"Child Class Hello\n";
    }
};

int main(){
    Child C1;
    Parent *ptr;

    ptr = &C1; // Run Time Binding Possible due to inheritence.
    ptr->hello(); //Virtal Function


    return 0;
}

/*
1. A virtual function is a member function that you expect to be redefined in derived classes.

2. We create Virtual function using Virtual Key Word and then it is mandatory to redefine that function in Child Class without Virtual keyword.

3. When an function is called then function of Parent Class is Overriden and Child's Class Function is Implemented.

4. Virtual Function is same like function Overriding.

5. Whenever there is a clash between Parent Class Function and Child Class Function,then Child Class Function is Chosen.

6. Virtual Functions are Dynamic in nature.

7. Defined by the keyword "virtual" inside a base class and are always declared with a base class and overridden in a child class.

8. A virtual function is called during Runtime.
*/