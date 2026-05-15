#include<iostream>
using namespace std;

void convert(int decimal){
    int n = decimal,remainder = 0,pow = 1,binary = 0;
    while(n>0){
        remainder = n%2;
        binary = binary + remainder*pow;
        pow = pow*10;
        n = n/2;
    }
    cout<<"The binary form of a number is : "<<binary;
}

int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    convert(n);
    return 0;
}