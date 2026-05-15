#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the age of ali : ";
    cin>>x;
    cout<<"Enter the age of hasan : ";
    cin>>y;
    cout<<"Enter the age of abbas : ";
    cin>>z;
    if(x>y && z>y){
        cout<<" Hasan is youngest of all.";
    }
    if(x>z && y>z){
        cout<<" Abbas is youngest of all.";
    }
    if(y>x && z>x){
        cout<<" Ali is youngest of all.";
    }

    return 0;
}