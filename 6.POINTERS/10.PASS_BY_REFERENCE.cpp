#include<iostream>
using namespace std;

int call(int* p){
    *p = 10;
    cout<<"NEW VALUE : "<<*p<<endl;
    return 0;
}

int main(){
    /*
    1) . In functions parameter are passed in two ways one is pass by value and another one is pass by reference.
    
    a) In pass by value when value is passed then a new variable which is a copy of that is created in a memory,any change that will take place there will not take place in main variable.

    b) In pass by reference address of the variable is passed as a parameter so all the operations are performed on that and no copy is created in an memory.
    Pass by refernce can take place by two types : 

    i)  BY POINTERS : Pointer is created instead of copy.

    ii) BY REFERENCE VARIABLE : 
    */

    
    int a = 7;
    call(&a);
    cout<<"OLD VALUE : "<<a<<endl;
    return 0;
}