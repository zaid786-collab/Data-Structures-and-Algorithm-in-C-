#include<iostream>
using namespace std;
int sum(int a,int b){
    int sum = a + b;
    return sum;
}
int main(){
    int a,b;
    cout<<"ENTER THE 1ST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE 2ND NUMBER : ";
    cin>>b;
    cout<<"THE SUM IS : "<<sum(a,b);
    

    return 0;
}