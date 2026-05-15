#include<iostream>
using namespace std;

void convert(int binary){
    int n = binary;
    int pow = 1;   // 2^0 
    int decimal = 0;
    int last_digit = 0;
    while(n>0){
        last_digit = n%10;
        decimal = decimal + pow*last_digit;
        pow = pow * 2;
        n = n/10;
    }
    cout<<"DECIMAL VALUE : "<<decimal;
}

int main(){
    int n;
    cout<<"ENTER THE BINARY VALUE : ";
    cin>>n;
    convert(n);
    return 0;
}