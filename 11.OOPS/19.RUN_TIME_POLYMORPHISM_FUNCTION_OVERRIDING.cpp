#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    void show(){
        cout<<"Parent Class Show..\n";
    }
};

class Child : public Parent{
public:
    void show(){
        cout<<"Child Class Show..\n";
    }    
};


int main(){
    Child zack;
    zack.show();
    return 0;
}

/*
1. Function Overriding : It is a case which is a Run Time Polymorphism,where it is decided at runtime about what to do,compiler don't know what to do.

2. When Parent and Child class both contain the same function with different implementation,then child class function is used and Parent Class function is said to be Overridden.

3. Overloding is Compile Time Polymorphism and Overriding is Run Time Polymorphism.

4. In Overloding there is a function with same name in same class,in overriding there is a function of same name in Parent and Child Class.
*/