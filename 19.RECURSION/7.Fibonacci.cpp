#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

int main(){
    cout<<"Fibonacci Series : "<<fibo(3);
    return 0;
}