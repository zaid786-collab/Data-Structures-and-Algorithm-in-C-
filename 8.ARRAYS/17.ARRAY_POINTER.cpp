#include<iostream>
using namespace std;
int main(){
    /*
    1) We know that array name behaves like a pointer,pointing to first index of an array.

    2) But just like other pointer we can't change its value one declared,means array pointer is read only pointer it can't be modified.
    */
    int x = 10;
    int *ptr = &x;

    int y = 7;
    ptr = &y;

    cout<<*ptr;

    int arr[] = {1,2,3};
    int z = 7;

    arr = &z;  // expresion must be a modifiable value.
    cout<<arr;
    return 0;
}