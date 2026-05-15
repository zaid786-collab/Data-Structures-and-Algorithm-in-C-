#include<iostream>
using namespace std;

int isprime(int n){
    if(n==1){
        return false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

void allprime(int a){
    for(int i=2;i<=a;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a;
    cout<<"Enter a number upto which prime number are needed : ";
    cin>>a;
    allprime(a);
    return 0;
}