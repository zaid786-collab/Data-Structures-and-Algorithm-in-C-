#include<iostream>
using namespace std;

int main(){
    cout<<"Square of a Number Calculator"<<endl;
    float number, square;
    cout<<"Enter a number: ";
    cin>>number;
    square = number * number;
    cout<<"The square of " << number << " is: " << square << endl;
    return 0;
}
