#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<a+b<<endl;
    return 0; 
}

int sum(double a,double b){
    cout<<a+b<<endl;
    return 0; 
}

int sum(int a,int b,int c){
    cout<<a+b+c<<endl;
    return 0; 
}

int main(){
    /*
    1)  Function overloading means when name of the function is same but its parameter(input) is different which can be of two types,in that case compiler know it and act accodingly.
    a) Number of parameters are different.
    b) Data type of parameters are different.
    */
    sum(5,6);
    sum(5.9,6.3);
    sum(11,69);
    sum(1,2,3);
    return 0;
}