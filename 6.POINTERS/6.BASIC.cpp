#include<iostream>
using namespace std;
int main(){
    /*
    1) Whenever a variable is created it is assigned a fixed space in a memory that space has an unique address that starts with 0x as it is of hexadecimal form.
    2) Address of operator(&) : It gives the address of an variable. 
    */
   int a = 7;
   cout<<"ADDRESS OF VARIABLE 'a' IS : "<<&a;
    return 0;
}