#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the point on X-axis : ";
    cin>>x;
    cout<<"Enter the point on Y-axis : ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"Point is on 1st Quardant.";
    }
    else if(x<0 && y>0){
        cout<<"Point is on 2nd Quardant.";
    }
    else if(x<0 && y<0){
        cout<<"Point is on 3rd Quardant.";
    }
    else if(x>0 && y<0){
        cout<<"Point is on 4th Quardant.";
    }
    else{
        cout<<"Point is at the center or on a line of axis.";
    }
    return 0;
}