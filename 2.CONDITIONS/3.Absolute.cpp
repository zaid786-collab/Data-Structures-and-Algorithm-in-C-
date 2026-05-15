#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    if(x>=0){
        cout<<"The absolute value of a number is : " <<x;
    } 
    else{
        cout<<"The absolute value of a number is : "<<-x;
    }
    return 0;
}