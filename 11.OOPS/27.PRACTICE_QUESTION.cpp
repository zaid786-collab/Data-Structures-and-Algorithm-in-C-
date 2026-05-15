#include<bits/stdc++.h>
using namespace std;

class Base{
public:
    virtual void print(){
        cout<<"Base"<<endl;
    }
};

class Derived : public Base{
    void print() override{
        cout<<"Derived"<<endl;
    }
};

int main(){
    // Function of that class is called whose address is passed.
    Base* b = new Derived();
    b->print();

    delete b;
    return 0;
}