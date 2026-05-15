#include<bits/stdc++.h>
using namespace std;

void rev(int a){
    if(a==0){
        return;
    }
    rev(a-1);      // If this line written before cout then numbers will print in increasing order.
    cout<<a<<" ";
   
}

int main(){
    rev(9);
    return 0;
}
/*
1. Void Function can return but it cannot return any value.

2. Every time an function is called,a new stack frame is created in a stack and as the value is returned or function ends then that stack frame deleats from the stack memory.
*/