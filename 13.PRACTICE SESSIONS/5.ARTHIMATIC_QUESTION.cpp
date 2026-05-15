#include<iostream>
#include<cfloat>
using namespace std;
int main(){
    int a,b,c;
    float z;
    cout<<"ENTER THE 1ST NUMBER : ";
    cin>>a;
    cout<<"ENTER THE 2ND NUMBER : ";
    cin>>b;
    cout<<"ENTER THE 3RD NUMBER : ";
    cin>>c;
    z=a/(b-c);
    cout<<"RESULT = "<<float(z);
    return 0;
}