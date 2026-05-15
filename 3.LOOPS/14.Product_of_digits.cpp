#include<iostream>
using namespace std;
int main(){
    int x,y,product;
    cout<<"Enter a number : ";
    y = x;
    cin>>x;
    product = 1;
    while(x!=0){
        y = x%10;
        product = product*y;
        x = x/10;
    }
    cout<<"The product of numbers of digits is : "<<product;
    return 0;
}