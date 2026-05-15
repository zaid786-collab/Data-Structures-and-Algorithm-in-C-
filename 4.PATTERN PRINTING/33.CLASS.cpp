#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // if(n%2==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }

    // int age;
    // cin>>age;
    // if(age>=18){
    //     cout<<"Eligible";
    // }
    // else{
    //     cout<<"Not Eligible";
    // }

    // int amount;
    // cout<<"Enter the amount : ";
    // cin>>amount;
    // int balance = 5000;
    // if(amount>balance){
    //     cout<<"Not enough balance";
    // }
    // else{
    //     cout<<"Amount Withdrawed Balnce Amount : "<<balance-amount;
    // }

    // return 0;

    // int a;
    // cout<<"If raining enter 1 else 0 : ";
    // cin>>a;
    // if(a==1){
    //     cout<<"No game";
    // }
    // else{
    //     int b;
    //     cout<<"Enter number of players : ";
    //     cin>>b;
    //     if(b>=11){
    //         cout<<"GAME WILL TAKE PLACE.";
    //     }
    //     else{
    //         cout<<"No game";
    //     }
    // }

    // int a;
    // cout<<"ENTER MARKS : ";
    // cin>>a;
    // if(a>=90){
    //     cout<<"A GRADE";
    // }
    // else if(a>=70 && a<=90){
    //     cout<<"B GRADE";
    // }
    // else if(a>=50 && a<=70){
    //     cout<<"C GRADE";
    // }
    // else if(a>=30 && a<=50){
    //     cout<<"D GRADE";
    // }
    // else if(a>=10 && a<=30){
    //     cout<<"E GRADE";
    // }
    // else{
    //     cout<<"FAIL";
    // }

    

    int a;
    cout<<"ENTER NUMBERS : ";
    cin>>a;
    char e;
    cout<<"Enter Operator : ";
    cin>>e;
    int b;
    cout<<"ENTER NUMBERS : ";
    cin>>b;
    if(e=='+'){
        cout<<"ADDITION : "<<a+b;
    }
    else if(e=='-'){
        cout<<"SUBTRACTION : "<<a-b;
    }
    else if(e=='*'){
        cout<<"MULTIPLICATION : "<<a*b;
    }
    else if(e=='/'){
        cout<<"DIVISION : "<<a/b;
    }
    else if(e=='%'){
        cout<<"MODULUS : "<<a%b;
    }
    else{
        cout<<"No Result";
    }
    return 0;

}