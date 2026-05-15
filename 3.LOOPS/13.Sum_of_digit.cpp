#include<iostream>
using namespace std;
int main(){
    int x,y,sum;
    cout<<"Enter a number : ";
    cin>>x;
    sum = 0;
    while(x!=0){
        y = x%10;
        sum = sum + y;
        x = x/10;
    }
    cout<<"The sum of digits is : "<<sum;

    return 0;
}