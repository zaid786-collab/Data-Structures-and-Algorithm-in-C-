#include<iostream>
using namespace std;

int maxof(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int x;
    cout<<"ENTER THE 1ST NUMBER : ";
    cin>>x;
    int y;
    cout<<"ENTER THE 2ND NUMBER : ";
    cin>>y;
    int z;
    cout<<"ENTER THE 3RD NUMBER : ";
    cin>>z;
    maxof(x,y,z);
    cout<<"THE MAXIMUM NUMBER IS : "<<maxof(x,y,z);
    return 0;
}