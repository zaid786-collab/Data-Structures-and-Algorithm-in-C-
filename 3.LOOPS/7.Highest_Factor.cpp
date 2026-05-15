#include<iostream>
using namespace std;
int main(){
    int x,f;
    cout<<"Enter a number whose highest factor is required : ";
    cin>>x;
    for(int i=2;i<x;i=i+1){
        if(x%i==0){
            f = i;
        }
    }
    cout<<"The Highest factor of "<<x<<" is : "<<f;
    return 0;
}