#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int product = 1;
    for(int i=1;i<=x;i++){
        product = product*i;
    }
    cout<<"Factorial : "<<product;

    return 0;
}