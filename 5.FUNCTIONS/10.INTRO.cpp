#include<iostream>
using namespace std;
void sayhello(){
    cout<<"Hello World\n";
}

void assistant(){
    sayhello();
    cout<<"Mohammad Zaid khan";
}

int main(){
    // Function is a block of code which runs when it is called.
    /*
    1) Function is of 2 types : 

    a). Predefined : Functions that alrady exist in a library. ex : printf(),abs(),power().

    b). User-Defined : Functions that are defined by user.
    */
    assistant();
    return 0;
}