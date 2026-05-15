#include<bits/stdc++.h>
using namespace std;

class A{
    string secret = "Secret Data";
    friend class B;  // Makes an Class B as a friend
    friend void revealSecret(A &obj);  // Makes an Function as a friend
};

class B{     // Class B becomes a friend class of A
public: 
    void showSecret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    A a1;
    B b1;
    b1.showSecret(a1);
    revealSecret(a1);
    return 0;
}
/*
1. A friend class or a friend function can access private and protected members of other classes in which it is declared as a friend.
*/