#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a charecter : ";
    cin>>ch;
    cout<<"The ASCII value of"<<ch<<"is : "<<int(ch)<<endl;
    // Number to Charecter:
    
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    char s = char(x);
    cout<<"The charecter is : "<<s;
    return 0;
}