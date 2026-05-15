#include<iostream>
using namespace std;

int main(){
    cout<<"Volume of Sphere Calculator"<<endl;
    float radius, volume;
    cout<<"Enter the radius of the sphere(in cm): ";
    cin>>radius;
    volume = (4.0/3.0) * 3.14 * radius * radius * radius;
    cout<<"The volume of the sphere is: " << volume << " cm^3" << endl;
    return 0;
}