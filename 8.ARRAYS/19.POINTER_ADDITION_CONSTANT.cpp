#include<iostream>
using namespace std;

void print(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
}

int main(){
    // int a = 7;
    // int *ptr = &a;

    // cout<<ptr<<endl;
    // ptr = ptr + 3;
    // cout<<ptr<<endl;
    // ptr = ptr - 3;
    // cout<<ptr<<endl;

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    print(arr,n);
    return 0;
}
/*
1) Adding or Substracting a constant from a pointer means adding same data type that much time.
ex : if pointer is of intger then adding 3 to it means adding 3 integers which is equal to (4*3) = 12 bytes.

2) It mainly works with arrays.
*/