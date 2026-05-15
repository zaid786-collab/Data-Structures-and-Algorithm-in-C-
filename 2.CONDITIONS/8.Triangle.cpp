#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the 1st side of a triangle : ";
    cin>>x;
    cout<<"Enter the 2nd side of a triangle : ";
    cin>>y;
    cout<<"Enter the 3rd side of a triangle : ";
    cin>>z;
    if(x+y>z && y+z>x && x+z>y){
        cout<<"All three sides are of triangle.";
    }
    else{
        cout<<"All three sides are not of triangle.";
    }
    return 0;
}