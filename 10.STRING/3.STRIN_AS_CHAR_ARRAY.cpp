#include<iostream>
using namespace std;
int main(){
    string c = "ZAID THIS SIDE.";
    // STRING BEHAVES LIKE AN CHARACTER ARRAY.
    cout<<c[0];
    c[0] = 'I';
    cout<<"\n";
    cout<<c[0];
    return 0;
}