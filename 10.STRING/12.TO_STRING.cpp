#include<iostream>
using namespace std;
int main(){
    int x = 12345;
    string s = to_string(x);
    //  TO CONVERT INT TO STRING : 
    s = s + " zaid";
    cout<<"STRING IS : "<<s;

    int z = 1234567;
    string f = to_string(z);
    cout<<"\n SIZE OF STRING IS : "<<f.length();
    return 0;
}