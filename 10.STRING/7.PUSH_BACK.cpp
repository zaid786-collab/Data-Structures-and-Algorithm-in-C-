#include<iostream>
using namespace std;
int main(){
    string x = "ZAID";
    cout<<"STRING : "<<x;
    // STRING IS A VARIABLE SIZE ARRAY WHOSE SIZE CAN BE UPDATED.
    // 1. TO INCREASE THE SIZE : 

    x.push_back('c');
    cout<<"\nUPDATED STRING IS : "<<x;

    // 2. TO DECREASE THE SIZE OF AN ARRAY:
    x.pop_back();
    cout<<"\nUPDATED STRING IS : "<<x;
    return 0;
}