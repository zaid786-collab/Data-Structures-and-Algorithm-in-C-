#include<iostream>
using namespace std;
int product(int a,int b){
    int x = a*b;
    return x;
}

int even(int a,int b){
    a%2==0 ? cout<<"Even" : cout<<"Odd";
    cout<<endl;
    b%2==0 ? cout<<"Even" : cout<<"Odd";
    return 0;
}
int main(){
    int n,m;
    cout<<"Enter the first number : ";
    cin>>n;
    cout<<"Enter the second number : ";
    cin>>m;
    int i = product(n,m);
    cout<<"Product of number is : "<<i<<endl;
    even(n,m);
    return 0;
}