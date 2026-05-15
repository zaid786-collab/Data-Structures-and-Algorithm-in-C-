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
    if(x>y && x>z){
        cout<<x<<" is gretest number among all three.";
    }
    else if(y>x && y>z){
        cout<<y<<" is gretest number among all three.";
    }
    else{
        cout<<z<<" is gretest number among all three.";
    }
    return 0;
}