#include<bits/stdc++.h>
using namespace std;

void funct(){
    int *ptr = new int;
    *ptr = 5;
    cout<<*ptr;
    delete ptr;
}

int main(){
    funct();
    return 0;
}
/*
If you use new for dynamic memory allocation then also use delete as a good programmar.

1. There is a two type of memory allocation :

A : STATIC MEMORY ALLOCATION : 
    1. Stack Memory is allocated at compile time.
    2. Stack Memory is fixed in size[Static].
    3. Stack Memory is allocated in stack and once the function is deleted from stackfram its all variables also deletes.
    4. Once the Function deletes or StackFrame ends then memory present in that stack frame gets automatically deleted,but Dynamic Memory creted in heap remians still even after deletion of stackframe in stack.

B. : DYNAMIC MEMORY ALLOCATION : 
    1. Dynamic Memory is allocated at runtime.
    2. Dynamic Memory is not fixed in size[Dynamic].
    3. Dynamic Memory is allocated in Heaps. 
    4. Dynamic Memory is allocated in Heaps and static part is allocated in Stacks,so main function which is part of stack goes to heap to access dynamic memory part.
    5. Dynamic Memory is not deleted by itself so programmer have to delete it by himself because once the function ends in stack no one else can access that dynamic memory from heaps resulting in a memory leak.
    6. Once the entire cpp code end then it will automatically ends entire dynamic memory of heaps.
*/