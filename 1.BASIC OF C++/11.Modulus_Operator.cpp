# include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    int c = a % b;
    cout<<"The modulus of "<<a<<" and "<<b<<" is :  "<<c<<endl;
    // Modulus(%) operator returns the remainder.
    // 1. If a>b then a%b = a.
    a = 3;
    b = 6;
    c = a % b;
    cout<<"The modulus is : "<<c<<endl; 
    // 2. (-a) % b = -[a % b]
    a = -30;
    b = 7;
    c = a % b;
    cout<<"The modulus is : "<<c<<endl; 
    return 0;
}