#include<iostream>
using namespace std;
int main(){
    int x,y,temp,reverse;
    cout<<"Enter a number : ";
    cin>>x;
    y = x;
    reverse = 0;
    temp = x;
    while(x!=0){
        y = x%10;
        reverse = reverse + y;
        reverse = reverse*10;
        x = x/10;
    }
    reverse = reverse/10;
    cout<<"The reverse of a number is : "<<reverse<<" and sum is : "<<temp+reverse;
    return 0;
}