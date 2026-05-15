#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the marks of 1st student : ";
    cin>>x;
    if(x>=81 && x<=100){
        cout<<" Student gets grade A.";
    }
    else if(x>=61 && x<=80){
        cout<<" Student gets grade B.";
    }
    else if(x>=41 && x<=60){
        cout<<" Student gets grade C.";
    }
    else if(x<=40){
        cout<<" Student is Fail!!!.";
    }
    else{
        cout<<"Invalid data.";
    }

    return 0;
}