#include<iostream>
using namespace std;
int main(){
    /*
    1) Pointers are the special variables that stores the address of another variable.
    ex : int *ptr = &a; will store the address of a.

    2) Data type of pointer should be same as that of variable whose address is stored.

    3) Pointer takes 8 bytes of space in a memory holding the address of another variable.

    4) Pointer which holds the address of a variable also have its own address and to store that we can create another pointer over pointer by syntax of **.
    */

    int n = 10;
    int* ptr = &n;
    cout<<"ADDRESS : "<<ptr<<endl;
    cout<<"SIZE OF POINTER : "<<sizeof(ptr)<<endl;

    float pi = 3.14;
    float* p = &pi;
    cout<<"ADDRESS OF FLOAT : "<<p<<endl;
    cout<<"SIZE OF POINTER : "<<sizeof(p)<<endl;

    int** ppt = &ptr;
    cout<<"ADDRESS OF A POINTER : "<<ppt<<endl;
    return 0;
}