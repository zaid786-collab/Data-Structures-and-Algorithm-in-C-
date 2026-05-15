#include<iostream>
using namespace std;
int fib(int u){
    if(u == 1 || u==2){
        return 1;
    }
    return fib(u-1) + fib(u-2);
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF TERMS IN FIBIONACCI : ";
    cin>>n;
    fib(n);
    cout<<"FIBIONACCI SERIES : "<<fib(n);
    return 0;
}