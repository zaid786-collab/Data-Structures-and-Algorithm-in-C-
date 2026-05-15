#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* p = &x;
    cout<<x<<"\n";
    cout<<p<<"\n";
    cout<<*p<<"\n";
    int y = *p = 9;
    cout<<"UPDATED VALUE : "<<y<<"\n";
    return 0;
}