#include<iostream>
using  namespace std;
int main(){
    int x = 32;
    int* ptr = &x;    // Pointer 
    char ch = 'A';
    char &cho = ch;   // Dereference variable

    cho += x;
    *ptr += ch;
    cout<<x<<","<<ch<<endl;
    return 0;
}