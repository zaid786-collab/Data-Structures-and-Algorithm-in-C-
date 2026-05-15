#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"ENTER A STRING : ";
    getline(cin,s);
    // BY USING GETLINE() OUR COMPLETE STRING IS PRINTED AS INPUT FROM THE USER WITHOUT STOPING AT BLANKS.
    cout<<"OUTPUT : "<<s;
    return 0;
}