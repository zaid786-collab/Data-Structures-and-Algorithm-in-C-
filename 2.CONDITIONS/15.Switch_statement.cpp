#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    char op;
    cin>>op;
    int y;
    cin>>y;
    switch(op){
        case '+':
            cout<<"Addition : "<<x+y;
            break;
        case '-':
            cout<<"Subtraction : "<<x-y;
            break;
        case '*':
            cout<<"Multiplication : "<<x*y;
            break;
        case '/':
            cout<<"Division : "<<x/y;
            break;
        default:
        cout<<"Invalid!!.";
    }
    return 0;
}