#include<iostream>
using namespace std;
int main(){
    string i = "HELLO";
    cout<<"STRING : "<<i;

    // 1. APPENND IS USED TO ADD STRINGS:

    i.append(" WORLD");
    cout<<"\nUPDATED STRING IS : "<<i;

    // 2.CLEAR IS UDEF TO DELEATE ENTIRE STRING:

    i.clear();
    cout<<"\nUPDATED STRING IS : "<<i<<" SIZE IS  : "<<i.length();
    return 0;
}