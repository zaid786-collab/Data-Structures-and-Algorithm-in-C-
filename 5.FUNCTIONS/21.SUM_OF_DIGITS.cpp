#include<iostream>
using namespace std;

void digit(int n){
    int sum = 0,num = n,digit;
        while(num>0){
            digit = num%10;
            sum = sum + digit;
            num = num/10;
        }
    cout<<"Sum of digits is : "<<sum;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    digit(n);
    return 0;
}