#include<iostream>
using namespace std;
void swap(int& x,int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int x;
    cout<<"ENTER THE 1ST NUMBER : ";
    cin>>x;
    int y;
    cout<<"ENTER THE 2ND NUMBER : ";
    cin>>y;
    cout<<"BEFORE SWAPPING : X = "<<x<<" ,Y = "<<y<<"\n";
    swap(x,y);
    cout<<"AFTER SWAPPING : X = "<<x<<" ,Y = "<<y<<"\n";
}