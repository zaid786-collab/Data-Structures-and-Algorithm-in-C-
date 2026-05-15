#include<bits/stdc++.h>
using namespace std;

class Complex{

    int real;
    int img;
    
public:
    Complex(int r,int i){
        real = r;
        img = i;
    }

    void shownum(){
        cout<<real<<" + "<<img<<"i\n";
    }

    //OPEAROTOR OVERLODING : Defining new laws for Opearator.
    void operator + (Complex &c2){
        int result = this->real + c2.real;
        int resimg = this->img + c2.img;

        Complex c3(result,resimg);
        cout<<"RESULT : ";
        c3.shownum();
    }

};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    c1.shownum();
    c2.shownum();

    c1 + c2;
    return 0;
}
/*
1. Operator Overloding means using same opeartor for different purpose. for ex : + can be used to add integers,to add float,to concatenate alphabets and to add objects in OOPS.

2. Operator Function is that function which defines the logic of an opearator.
Synatx : returnType opeeator opSymbol(){....}.
*/