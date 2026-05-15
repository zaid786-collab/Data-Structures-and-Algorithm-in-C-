#include<iostream>
using namespace std;
int main(){
    int x,check;
    cout<<"Enter a number to check for prime or composite : ";
    cin>>x;
    check = 0;
    for(int i=2;i<x;i++){
        if(x%i==0){
            check = 1;
            break;
        }
        else{
            check = 0;
        }
    }
    if(check==1){
        cout<<x<<" is a composite number.";
    }
    else{
        cout<<x<<" is a prime number.";
    }

    return 0;
}