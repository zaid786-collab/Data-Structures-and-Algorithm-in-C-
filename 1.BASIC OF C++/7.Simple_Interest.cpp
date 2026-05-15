#include<iostream>
using namespace std;

int main(){
    cout<<"Simple Interest Calculator"<<endl;
    float principal, rate, time, simpleInterest;
    cout<<"Enter Principal Amount(in rupees): ";
    cin>>principal;
    cout<<"Enter Rate of Interest: ";
    cin>>rate;
    cout<<"Enter Time (in years): ";
    cin>>time;
    simpleInterest = (principal * rate * time) / 100;
    cout<<"The Simple Interest is: " << simpleInterest << endl;
    return 0;
}