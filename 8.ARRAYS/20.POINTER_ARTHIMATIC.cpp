#include<iostream>
using namespace std;

int main(){
    // int a = 7;
    // int *ptr1 = &a;
    // int *ptr2 = &a + 3;

    // cout<<ptr2<<endl;
    // cout<<ptr1<<endl;

    // cout<<ptr2-ptr1<<endl;

    int arr[] = {1,2,3,4,5};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout<<*ptr2<<endl;
    cout<<*ptr1<<endl;

    cout<<ptr2-ptr1<<endl;

    cout<<(ptr2>ptr1)<<endl;
    cout<<(ptr1==arr)<<endl;
    return 0;
}

/*
1) In cpp we cannot add two pointers it is invalid operation as both of them stores data.
ex : ptr1 + ptr2 [Invalid Operation]

2) But we can substraction them only if both of them are of same data type,this substraction will give the numbers of variables[Spaces of that data type] present between them.

3) We can also use comparison operator[==,<,>] on a pointer which will give output as 1 and 0.
*/