#include<iostream>
using namespace std;

int main(){
    float celsius, fahrenheit;
    cout<<"ENTER TEMPERATURE IN FAHRENHEIT : ";
    cin>>fahrenheit;
    celsius=(fahrenheit-32)*5/9;
    cout<<"TEMPERATURE IN CELSIUS : "<<celsius; 
    return 0;
}