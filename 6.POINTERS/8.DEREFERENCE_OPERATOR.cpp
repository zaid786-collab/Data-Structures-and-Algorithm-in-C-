#include<iostream>
using namespace std;
int main(){
    /*
    1) Dereference operator(*) is used to access and modify the value of a variable whcih is pointed by an pointer,means it will access the value of a variable by its address.
    */

    int a = 10;
    int* ptr = &a;
    cout<<"ADDRESS : "<<ptr<<endl;
    cout<<"VALUE : "<<*ptr<<endl;

    *ptr = 7;
    cout<<"VALUE : "<<a<<endl;
    return 0;
}