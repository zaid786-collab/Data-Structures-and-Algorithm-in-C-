#include<iostream>
using namespace std;
int main(){
    // POINTERS : ARE USED TO STORE THE ADDRESS OF ANY DATA TYPE.
    // SYNTAX : int* variable_name

    int x = 3;
    int* p;
    p = &x;
    int** q = &p;
    cout<<*q<<endl;      // Moves By One pointer to back address of p is obtained
    cout<<**q<<endl;     // Moves By two pointer to back value stored in p is obtained
    cout<<&x<<"\n";
    cout<<p<<"\n";

    cout<<*p<<"\n";
    return 0;
}
/*
1. Pointers are the variables that are used to store the value of another variable.

USING POINTERS WE CAN ACCESS OR UPDATE THE VALUE IN A VARIBLE WHOSE ADDRESS IS PRESENT IN A POINTER,USING DEREFERRNCE OR * OPERATOR.
*/