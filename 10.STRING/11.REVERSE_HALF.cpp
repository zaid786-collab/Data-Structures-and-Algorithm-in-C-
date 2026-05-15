#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string c = "ZAID KHAN";
    cout<<"STRING IS : "<<c;
    reverse(c.begin(),c.begin()+4);
    cout<<"\nREVERSE OF A STRING IS : "<<c;

    string i = "ZAID KHAN";
    cout<<"\nSTRING IS : "<<i;
    reverse(i.begin()+2,c.begin()+6);
    cout<<"\nREVERSE OF A STRING IS : "<<i;
    return 0;   
}