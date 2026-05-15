#include<iostream>
using namespace std;

int main(){
    cout<<"Area of Circle Calculator"<<endl;
    float pi = 3.14;
    float radius,area;
    cout<<"Enter the radius of the circle(in cm): ";
    // cin is used to take input from the user.
    cin>>radius;
    area = pi * radius * radius;
    cout<<"The area of the circle is: " << area << " cm^2" << endl;
    return 0;
}