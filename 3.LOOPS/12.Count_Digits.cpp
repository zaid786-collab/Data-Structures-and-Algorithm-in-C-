#include<iostream>
using namespace std;
int main(){
    int x,count;
    cout<<"Enter a number : ";
    cin>>x;
    count = 0;
    while(x!=0){
        x=x/10;
        count = count + 1;
    }
    cout<<"The number is "<<count<<" digit.";
    return 0;
}