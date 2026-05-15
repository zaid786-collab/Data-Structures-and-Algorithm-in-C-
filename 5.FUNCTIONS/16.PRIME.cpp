#include<iostream>
using namespace std;

bool prime(int a){
    if(a == 1){
        return false;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter a number to be checked : ";
    cin>>n;
    int x = prime(n);
    if(x==0){
        cout<<"NUMBER IS A PRIME.";
    }
    else{
        cout<<"NOT A PRIME NUMBER.";
    }
    return 0;
}