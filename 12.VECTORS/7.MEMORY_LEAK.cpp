#include<bits/stdc++.h>
using namespace std;

int *func(){
    int *ptr = new int;
    *ptr = 1200;
    cout<<"Ptr Points to : "<<*ptr<<endl;
    return ptr;
}

int main(){
    int *x = func();
    cout<<*x<<endl;
    return 0;
}
/*
1. Memory leak occurs when programmers create a memory in a heap and forget to delete it,which leads to reduced performances due to depletion of available memory.
2. While creating servers we have to take care for deleting dynamic alloted memory. 
3. Once function gets deleted then its variables also from stack fram which makes its impossible to access dynamic memory in heaps.
4. Once the entire cpp code end then it will automatically ends entire dynamic memory of heaps.
*/