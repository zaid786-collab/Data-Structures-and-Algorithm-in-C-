#include<iostream>
using namespace std;
int main(){
    int x,y,sum;
    cout<<"Enter a number : ";
    cin>>x;
    sum = 0;
    y = x;
    while(x!=0){
        y = x%10;
        if(y%2==0){
            sum = sum + y;
        }
        x = x/10;
    }
    cout<<"The sum of even digits is : "<<sum;
    return 0;
}