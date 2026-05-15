#include<iostream>
using namespace std;

int  quad(int a,int b){
    return a*a + b*b + 2*a*b;
}

int main(){
    int n,m;
    cout<<"Enter the 1st number : ";
    cin>>n;
    cout<<"Enter the 2nd number : ";
    cin>>m;
    cout<<"The output is : "<<quad(n,m);
    return 0;
}