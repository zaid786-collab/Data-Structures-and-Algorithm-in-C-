#include<iostream>
using namespace std;

void change(int &v){
    v = 17;
    cout<<"NEW : "<<v<<endl;
}

int main(){
    /*
    1) Reference variable is one of the way to pass an argument in a function.

    2) Reference variable is just an alternate name(alias) of an existing variable.

    3) No new variable is pointer is created here in a memory just new name is given to same variable.

    4) Reference variable can be created by ampersent(&) sign.

    5) It is must to initilise a refernece variable.
    */

    int a = 7;
    // int &b = a;
    // b = 10;
    // cout<<b<<endl;
    change(a);
    cout<<"OLD : "<<a<<endl;

    // Now both a and b means same variable.
    return 0;
}