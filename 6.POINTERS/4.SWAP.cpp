#include<iostream>
using namespace std;
void swap(int* i,int* o){
    int  temp = *i;
    *i = *o;
    *o = temp;
}

int main(){
    int x;
    cout<<"ENTER THE 1ST NUMBER : ";
    cin>>x;
    int u;
    cout<<"ENTER THE 2ND NUMBER : ";
    cin>>u;
    cout<<"BEFORE SWAPPING : X : "<<x<<"  Y : "<<u<<"\n";
    swap(&x,&u);
    cout<<"AFTER SWAPPING : X : "<<x<<"  Y : "<<u<<"\n";
    return 0;
}