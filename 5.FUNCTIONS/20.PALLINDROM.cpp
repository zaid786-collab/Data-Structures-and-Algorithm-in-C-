#include<iostream>
using namespace std;


int check(int r,int a){
    if(r==a){
        cout<<"Number "<<r<<" and "<<a<< " is a pallindrom."<<endl;
    }
    else{
        cout<<"Number "<<r<<" and "<<a<< " are not a pallindrom."<<endl;
    }
    return 0;
}

int pallindrom(int n){
    int reverse = 0,digit,num,initial;
    initial = n;
    num = n;
    while(num>0){
        digit = (num%10);
        reverse = (reverse)*10 + digit;
        num = num/10;
    }
    check(reverse,initial);
    return 0;
}

int main(){
    int n;
    cout<<"Enter a number to be checked : ";
    cin>>n;
    pallindrom(n);
    return 0;
}