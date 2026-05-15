#include<iostream>
using namespace std;

void funct(int a[]){
    a[0] = 7;
}

void fun2(int *ptr){
    ptr[0] = 3;
}

void printarr(int crr[],int n){
    for(int i=0;i<n;i++){
        cout<<crr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<"ADDRESS : "<<arr<<endl;
    cout<<*(arr)<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;

    // funct(arr);
    // cout<<arr[0]<<endl;
    // fun2(arr);
    // cout<<arr[0]<<endl;
    cout<<"SIZE OF ARRAY : "<<sizeof(arr)/sizeof(int)<<endl;
    printarr(arr,5);
    return 0;
}

 /*
    1) In c++ array name can be treated as an pointer,means if we print just array name it will give address of that array's 1st element 0th index.

    2) These array name can be used by dereference operator(*) to access the array element.

    3) Arrays are always passed by reference.

    4) Passing array name is same like passing pointer in a function.

    5) Array name and pointer both are same thing,both provides address and can use in same way.

    6) When array is passed in a function then it becomes pointer just pointing to 0th index of an array,to use operation across it we also need to pass size seprately.

    7) Along with array name we also have to pass its size in a function.
    */