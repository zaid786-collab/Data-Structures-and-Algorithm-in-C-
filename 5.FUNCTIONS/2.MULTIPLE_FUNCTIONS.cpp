#include<iostream>
using namespace std;

void greet(){
    cout<<"Good Morning.";
}
void hello(){
    cout<<"HELLO WORLD!!,";
    greet();
}
int main(){
    hello();
    return 0;
}