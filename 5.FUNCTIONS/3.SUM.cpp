#include<iostream>
using namespace std;
void sum(int a,int b){
    int sum = a + b;
    cout<<"THE SUM IS : "<<sum<<" ";
}
int main(){
    int a,b;
    cout<<"ENTER THE 1ST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE 2ND NUMBER : ";
    cin>>b;
    sum(a,b);
    

    return 0;
}