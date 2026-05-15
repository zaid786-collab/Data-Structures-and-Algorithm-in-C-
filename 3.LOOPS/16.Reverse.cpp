#include<iostream>
using namespace std;
int main(){
    int x,y,reverse;
    cout<<"Enter the number : ";
    cin>>x;
    reverse = 0;
    y = x;
    while(x!=0){
        y = x%10;
        reverse = reverse + y;
        reverse = reverse*10;
        x = x/10;
    }
    cout<<"The reverse of a number is : "<<reverse/10;
    return 0;
}