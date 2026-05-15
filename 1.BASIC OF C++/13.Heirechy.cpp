#include<iostream>
using namespace std;
int main(){
    // BODMAS - (DIVIDE,MULTIPLY) and (ADDITION,SUBTRACTION) have same precedence so computer moves from left to right.
    int x,y,z,c;
    cout<<"Enter the 1st number : ";
    cin>>x;
    cout<<"Enter the 2nd number : ";
    cin>>y;
    cout<<"Enter the 3rd number : ";
    cin>>z;
    c = x*y/z;
    cout<<"The output is : "<<c;
    return 0;
}