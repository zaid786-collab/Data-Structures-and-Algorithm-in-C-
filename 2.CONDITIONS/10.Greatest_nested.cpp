#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the 1st number : ";
    cin>>x;
    cout<<"Enter the 2nd number : ";
    cin>>y;
    cout<<"Enter the 3rd number : ";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<x<<" is gretest among all three numbers.";
        }
        else{
            cout<<z<<" is gretest among all three numbers.";
        }
    }
    else{
        if(y>z){
            cout<<y<<" is gretest among all three numbers.";
        }
        else{
            cout<<z<<" is gretest among all three numbers.";
        }
    }
    return 0;
}